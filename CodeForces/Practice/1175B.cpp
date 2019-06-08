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
int maxn=(1ll<<32)-1;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    stack<pair<int,int>> a;
    int n;
    cin>>n;
   	string temp;
   	int i;
    f1(i,0,n)
    {
    	cin>>temp;
    	if(temp[0]=='a')
    	{
    		a.push(mp(1,1));
    	}
    	else if(temp[0]=='f')
    	{
    		int num;
    		cin>>num;
    		a.push(mp(0,num));
    	}
    	else
    	{
    		pair<int,int> s;
    		int num=0;
    		while(1)
    		{
    			s=a.top();
    			a.pop();
    			if(s.ff==0)
    			{
    				if(s.ss*num>maxn)
    				{
    					cout<<"OVERFLOW!!!";
    					return 0;
    				}
    				a.push(mp(1,s.ss*num));
    				break;
    			}
    			else
    			{
    				num+=s.ss;
    				if(num>maxn)
    				{
    					cout<<"OVERFLOW!!!";
    					return 0;
    				}
    			}
    		}
    	}
    }
    int ans=0;
    while(a.empty()!=1)
    {
    	ans+=a.top().ss;
    	a.pop();
    	if(ans>maxn)
    	{
    		cout<<"OVERFLOW!!!";
    		return 0;
    	}
    }
    cout<<ans;
    return 0;
}