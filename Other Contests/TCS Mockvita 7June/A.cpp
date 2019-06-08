/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define ll long long
#define f1(i,a,b) for(i=a;i<b;i++)
#define f2(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
int i,j;
ll temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    //     freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    string s,ans;
    cin>>s;
    int q;
    cin>>q;
    int ss=s.size();
    int start=0;
    for(i=0;i<q;i++)
    {
        char p;
        cin>>p>>temp;
        //cout<<p<<gp<<temp<<endl;
        if(p=='L')
        {
            start+=temp;
            start%=s.size();
            ans.pb(s[start]);
        }
        else
        {
            start-=temp;
            start=start+s.size();
            start%=s.size();
            ans.pb(s[start]);
        }
    }
    sort(ans.begin(),ans.end());
    int n=ans.size();
    //cout<<ans;
    //cout<<s.size();
    for(i=0;i<ss;i++)
    {
        string temp;
        for(j=i;j<i+n;j++)
        {
            temp.pb(s[j%s.size()]);
        }
        sort(temp.begin(),temp.end());
        if(temp==ans)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}