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
     
        int n,m;
        cin>>n>>m;
        int ans=1;
        f1(i,1,m+1)
        {
        	ans*=i;
        	ans%=mod;
        }
        cout<<ans<<endl;
        return 0;
    }