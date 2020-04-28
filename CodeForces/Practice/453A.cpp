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
const int mod=1000000007;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin>>m>>n;

    ld ans = 0.0;
    f1(i,1,m+1)
    {
        ld curr = pow((ld)i / m, n) - pow((ld)(i-1) / m, n);
        curr *= i;
        ans += curr;
    }
    cout<<setprecision(9)<<fixed<<ans<<endl;
    return 0;
}