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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, k, d;
    cin>>x>>k>>d;
    x = abs(x);
    temp = min(x / d, k);
    x -= temp * d;
    k -= temp;
    if(k % 2 == 0)
    cout<<x<<endl;
    else
    cout<<abs(x - d)<<endl;
    return 0;
}