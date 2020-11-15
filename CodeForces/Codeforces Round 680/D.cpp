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

const int mod = 998244353;
const ld PI = acosl(-1.0);
ll temp;

int factorial[1000000];

unsigned long long power(unsigned long long x, int y, int p)
{
    unsigned long long res = 1;
 
    x = x % p;
 
    while (y > 0) 
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

unsigned long long modInverse(unsigned long long n, int p)
{
    return power(n, p - 2, p);
}

unsigned long long nCrModPFermat(unsigned long long n, int r, int p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    return (factorial[n] * modInverse(factorial[r], p) % p * modInverse(factorial[n - r], p) % p) % p;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial[0] = 1;
    for (int i = 1; i <= 1000000; i++) {
        factorial[i] = factorial[i - 1] * i % mod;
    }
    int n;
    cin>>n;
    n *= 2;
    int a[n];
    f1(i, 0, n)
    cin>>a[i];

    int num = nCrModPFermat(n - 1, n / 2 - 1, mod);
    num *= 2;
    num %= mod;
    num %= mod;
    int ans = 0;
    sort(a, a + n);
    for(int i = 0; i < n - 1; i++)
    {
        int mul = min(i + 1, n - (i + 1));
        temp = num * mul;
        temp %= mod;
        temp *= (a[i + 1] - a[i]);
        temp %= mod;
        ans += temp;
        ans %= mod;
    }
    cout<<ans<<endl;
    return 0;
}