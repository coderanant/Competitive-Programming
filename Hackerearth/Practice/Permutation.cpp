/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
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

int i;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    string cur,final;
    f1(i,0,n)
    {
        int temp;
        cin>>temp;
        cur+=char('0'+temp);
        final+=char('0'+i+1);
    }
    //cout<<cur<<gp<<final<<endl;
    map<string,int> mp;
    queue<string> q;

    q.push(cur);
    mp[cur]=0;
    while(!q.empty())
    {
        string temp=q.front();
        q.pop();
        //cout<<temp<<endl;
        if(temp==final)
        {
            cout<<mp[temp];
            return 0;
        }
        f1(i,2,n+1)
        {
            string cc=temp;
            reverse(cc.begin(),cc.begin()+i);
            //cout<<cc<<gp;
            if(mp.find(cc)==mp.end())
            {
                mp[cc]=mp[temp]+1;
                q.push(cc);
            }
        }
    }
    
    
    return 0;
}