    /*coderanant*/
    #include <bits/stdc++.h>
    using namespace std;
     
    #define int long long
    #define ll long long
    #define f1(i,a,b) for(int i=a;i<b;i++)
    #define f2(i,a,b) for(int i=a;i>=b;i--)
    #define endl '\n'
    #define pb push_back
    #define gp " "
    #define ff first
    #define ss second
    #define mp make_pair
     
    const int mod=1000000007;
    ll temp;
    #define ppp pair<int,pair<int,int>>
     
    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        int n;
        cin>>n;
        int x[n+1],y[n+1];
        f1(i,1,n+1)
        {
        	cin>>x[i]>>y[i];
        }
        int cost[n+1];
        f1(i,1,n+1)
        cin>>cost[i];
     
        int k[n+1];
        f1(i,1,n+1)
        cin>>k[i];
     
     
        int vis[n+1];
        memset(vis,0,sizeof(vis));
     
        vector<int> pow;
        vector<pair<int,int>> conn;
     
        priority_queue <ppp, vector<ppp>, greater<ppp> > pq;
        int ansmin=mod;
        int temp=0;
     
        f1(i,1,n+1)
        {
        	if(cost[i]<ansmin)
        	{
        		ansmin=cost[i];
        		temp=i;
        	}
        }
        pow.pb(temp);
        int ans=cost[temp];
        vis[temp]=1;
        int i=temp;
        int zz=n-1;
        while(zz--)
        {
        	ansmin=mod;
        	int p=0,q=0;
        	f1(j,1,n+1)
        	{
        		if(i!=j&&vis[j]!=1)
        		{
        			pq.push(mp(cost[j],mp(j,-1)));
        			pq.push(mp((abs(x[i]-x[j])+abs(y[i]-y[j]))*(k[i]+k[j]),mp(i,j)));
        		}
        	}
        	while(1)
        	{
        		pair<int,pair<int,int>> temp=pq.top();
        		pq.pop();
        		if(temp.ss.ss==-1)
    	    	{
    	    		if(vis[temp.ss.ff]==0)
    	    		{
    	    			pow.pb(temp.ss.ff);
    	    			ans+=cost[temp.ss.ff];
    	    			i=temp.ss.ff;
    	    			vis[temp.ss.ff]=1;
    	    			break;
    	    		}
    	    	}
    	    	else
    	    	{
    	    		if(vis[temp.ss.ss]==0)
    	    		{
    	    			conn.pb(mp(temp.ss.ff,temp.ss.ss));
    	    			ans+=temp.ff;
    	    			i=temp.ss.ss;
    	    			vis[temp.ss.ss]=1;
    	    			break;
    	    		}
    	    	}
        	}
        }
        cout<<ans<<endl;
        cout<<pow.size()<<endl;
        f1(i,0,pow.size())
        {
        	cout<<pow[i]<<gp;
        }
        cout<<endl;
        cout<<conn.size()<<endl;
        f1(i,0,conn.size())
        {
        	cout<<conn[i].ff<<gp<<conn[i].ss<<endl;
        }
        return 0;
    }