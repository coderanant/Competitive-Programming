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
    int q;
    cin>>q;
    while(q--)
    {
    	int b,w;
    	cin>>b>>w;
    	if(max(b,w)>min(b,w)*3+1)
    	{
    		cout<<"NO"<<endl;
    	}
    	else
    	{
    		cout<<"YES"<<endl;
    		if(b>=w)
    		{
    			if(b==3*w+1)
    			{
    				cout<<4<<gp<<1<<endl;
    				b--;
    			}
    			i=4,j=2;
    			b-=w;
    			while(w--)
    			{
    				cout<<i<<gp<<j<<endl<<i<<gp<<j+1<<endl;
    				j+=2;
    			}
    			i=2;
    			while(1)
    			{
    				if(b==0)
    					break;
    				cout<<3<<gp<<i<<endl;
    				b--;
    				if(b==0)
    					break;
    				cout<<5<<gp<<i<<endl;
    				b--;
    				i+=2;
    			}
    		}
    		if(w>b)
    		{
    			if(w==3*b+1)
    			{
    				cout<<3<<gp<<1<<endl;
    				w--;
    			}
    			i=3,j=2;
    			w-=b;
    			while(b--)
    			{
    				cout<<i<<gp<<j<<endl<<i<<gp<<j+1<<endl;
    				j+=2;
    			}
    			i=2;
    			while(1)
    			{
    				if(w==0)
    					break;
    				cout<<2<<gp<<i<<endl;
    				w--;
    				if(w==0)
    					break;
    				cout<<4<<gp<<i<<endl;
    				w--;
    				i+=2;
    			}
    		}
    	}
    }
    return 0;
}