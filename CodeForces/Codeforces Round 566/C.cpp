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
    vector<vector<string>> a(5000005);
    f1(i,0,n)
    {
    	string temp;
    	cin>>temp;
    	int num=0;
    	char last ='.';
    	f1(j,0,temp.size())
    	{
    		if(temp[j]=='a'||temp[j]=='e'||temp[j]=='i'||temp[j]=='o'||temp[j]=='u')
    		{
    			num++;
    			last=temp[j];
    		}
    	}
    	int tu=0;
    	if(last=='a')
    		tu=0;
    	else if(last == 'e')
    		tu=1;
    	else if(last == 'i')
    		tu=2;
    	else if(last == 'o')
    		tu=3;
    	else if(last == 'u')
    		tu=4;
    	
    	a[5*num+tu].pb(temp);

    }
    vector<string> last,first;
    f1(i,0,1000001)
    {
    	f1(j,0,5)
    	{
    		//last+=a[5*i+j].size()/2;
    		if(a[5*i+j].size()%2==0)
    		{
    			int k;
    			f1(k,0,a[5*i+j].size())
    			{
    				last.pb(a[5*i+j][k]);
    			}
    			a[5*i+j].clear();
    			//cout<<a[5*i+j].size()<<endl;
    		}
    		else
    		{
    			int k;
    			f1(k,1,a[5*i+j].size())
    			{
    				last.pb(a[5*i+j][k]);
    			}
    			int si=a[5*i+j].size()-1;
    			while(si--)
    				a[5*i+j].pop_back();
    			//cout<<a[5*i+j][0]<<endl;
    		}

    	}
    	int lul=0;
    	f1(j,0,5)
    	{
    		lul+=a[5*i+j].size();
    	}
    	f1(j,0,5)
    	{
    		int k;
    		f1(k,0,a[5*i+j].size())
    		{
    			first.pb(a[5*i+j][k]);
    		}
    		// if(a[5*i+j].size()!=0)
    		// 	cout<<a[5*i+j].size()<<endl;
    	}
    	if(lul%2==1)
    	{
    		first.pop_back();
    	}
    }
    int si=last.size()-first.size();
    if(first.size()<last.size())
    {
    	f1(i,0,si/2)
    	{
    		first.pb(last[last.size()-1]);
    		last.pop_back();
    	}
    }
    
   	cout<<last.size()/2<<endl;
    f1(i,0,(last.size())/2*2)
    {
    	cout<<first[i]<<gp<<last[i]<<endl;
    }
    return 0;
}