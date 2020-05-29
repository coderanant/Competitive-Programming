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
long double pi = 3.141592653589793238462643383279;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, h, m;
    cin>>a>>b>>h>>m;

    long double ang1 = 2 * pi * h / 12;
    ang1 = ang1 + 2 * pi * m / (12 * 60);
    long double ang2 = m * 2 * pi / 60;
    long double ang;

    ang = ang2 - ang1;

    long double ans = a * a + b * b - 2 * a * b * cos(ang);
    ans = sqrt(ans);
    cout<<setprecision(10)<<fixed<<ans<<endl;
    return 0;
}