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
int i,j;
ll temp;

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
    string s;
    cin>>s;
    int zer=0,one=0;
    f1(i,0,n)
    {
    	if(s[i]=='0')
    		zer++;
    	else
    		one++;
    }
    if(zer!=one)
    	cout<<1<<endl<<s;
    else
    {
    	cout<<2<<endl<<s[0]<<gp;
    	f1(i,1,n)
    	cout<<s[i];
    }
    return 0;
}