/*coderanant*/
//Done in a harder manner. See C2 for an easier implementation.
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
    int n,m;
    cin>>n>>m;
    int a[n];
    f1(i,0,n)
    {
    	cin>>a[i];
    }

    multiset<int> stu;
    vector<int> ans;
    int sum=0;
    f1(i,0,n)
    {
    	//cout<<sum<<gp;
    	if(a[i]>(m-sum))
    	{
    		int diff;
    		diff=a[i]-(m-sum);
    		//cout<<diff<<endl;
    		int count=0;
    		for(auto it=stu.rbegin();it!=stu.rend();it++)
    		{
    			diff-=*it;
    			//cout<<diff<<endl;
    			count++;
    			if(diff<=0)
    				break;
    		}
    		ans.pb(count);
    	}
    	else
    		ans.pb(0);
    	sum+=a[i];
    	stu.insert(a[i]);
    }
    f1(i,0,ans.size())
    {
    	cout<<ans[i]<<gp;
    }
    return 0;
}