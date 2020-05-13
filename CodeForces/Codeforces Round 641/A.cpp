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
        int n, k;
        cin>>n>>k;
        int ans = 0;
        if(n % 2 == 1)
        {
            f1(i,2,n+1)
            {
                if(n%i == 0)
                {
                    ans += i;
                    break;
                }
            }
            cout<<ans+n+(k-1)*2<<endl;
        }
        else
        cout<<n + k*2<<endl;
    }
    return 0;
}