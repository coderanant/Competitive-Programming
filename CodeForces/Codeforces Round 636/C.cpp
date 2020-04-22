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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        f1(i,0,n)
        cin>>a[i];
        vector<int> ind;
        int flag;
        if(a[0] < 0)
        flag = -1;
        else
        flag = 1;
        ind.pb(0);
        f1(i,0,n)
        {
            if(flag == 1 && a[i] < 0)
            {
                flag = -1;
                ind.pb(i);
            }
            else if(flag == -1 && a[i] > 0)
            {
                flag = 1;
                ind.pb(i);
            }
        }
        ind.pb(n);
        int ans = 0;

        f1(i,0,ind.size()-1)
        {
            int maxi = -1*mod;
            f1(j,ind[i], ind[i+1])
            {
                maxi = max(maxi, a[j]);
            }
            ans += maxi;
        }
        cout<<ans<<endl;
    }
    return 0;
} 