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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;
int solver(int i, int p, int q)
{
    int div = 0, temp = q;
    while(temp % i == 0)
    {
        temp /= i;
        div++;
    }
    int div2 = 0;
    temp = p;
    while(temp % i == 0)
    {
        temp /= i;
        div2++;
    }
    int num = max(0ll, div2 - (div - 1));
    temp = p;
    while(num)
    {
        temp /= i;
        num--;
    }
    return temp;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int p, q;
        cin>>p>>q;

        int ans = 1;
        for(int i = 2; i * i <= q; i++)
        {
            if(q % i == 0)
            {
                ans = max(ans, solver(i, p, q));
                ans = max(ans, solver(q / i, p, q));
            }
            // cout<<i<<gp<<ans<<endl;
        }
        ans = max(ans, solver(q, p, q));
        cout<<ans<<endl;
    }
    return 0;
}