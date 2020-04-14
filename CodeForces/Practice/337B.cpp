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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    double ab = (double)a / b;
    double cd = (double)c / d;

    if( ab == cd)
    cout<<"0/1"<<endl;
    else if( ab < cd)
    {
        int lc = a * c / __gcd(a, c);
        b *= (lc / a);
        d *= (lc / c);
        int top = (b - d);
        int bot = b;
        temp = __gcd(top, bot);
        top /= temp;
        bot /= temp;
        cout<<top<<'/'<<bot<<endl;
    }
    else
    {
        int lc = b * d / __gcd(b, d);
        a *= (lc / b);
        c *= (lc / d);
        int top = (a - c);
        int bot = a;
        temp = __gcd(top, bot);
        top /= temp;
        bot /= temp;
        cout<<top<<'/'<<bot<<endl;
    }
    return 0;
}