/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i, a, b) for (int i = a; i < b; i++)
#define f2(i, a, b) for (int i = a; i >= b; i--)
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

int primes[1000001];
int ins[1000001];
void sieve()
{
    for (int i = 0; i < 1000001; i++)
        primes[i] = i;
    for (int i = 2; i * i < 1000001; i++)
    {
        if (primes[i] == i)
        {
            for (int j = i * i; j < 1000001; j += i)
            {
                if (primes[j] == j)
                    primes[j] = i;
            }
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    f1(i, 0, n)
            cin >> a[i];
    sieve();
    int gcd = a[0];
    f1(i, 1, n)
    {
        gcd = __gcd(gcd, a[i]);
    }

    memset(ins, 0, sizeof ins);

    int pairco = true;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        while (temp != 1)
        {
            ins[primes[temp]]++;
            int fact = primes[temp];
            while (temp % fact == 0 && fact != 1)
                temp /= fact;
        }
    }
    f1(i, 2, 1000001)
    {
        if (ins[i] > 1)
        {
            pairco = false;
            break;
        }
    }
    if (pairco)
        cout << "pairwise coprime" << endl;
    else if (gcd == 1)
        cout << "setwise coprime" << endl;
    else
        cout << "not coprime" << endl;
    return 0;
}