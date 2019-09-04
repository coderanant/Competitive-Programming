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
    int pos=0,neg=0;
    f1(i,0,s.size())
    {
    	if(s[i]=='(')
    		pos++;
    	else
    		neg++;
    }
    if(pos!=neg)
    	cout<<"No";
    else
    {
    	vector<char> q;
    	f1(i,0,s.size())
    	{
    		if(s[i]=='(')
    		q.pb('(');
    		else
    		{
    			if(q.size()!=0)
    			{
    				if(q[q.size()-1]=='(')
    					q.pop_back();
    				else
    					q.pb(')');
    			}
    			else
    				q.pb(')');

    		}
    	}
    	if(q.size()==2||q.size()==0)
    		cout<<"Yes";
    	else
    		cout<<"No";
    }
    return 0;
}