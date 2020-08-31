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
int n, a[100001];
int f(int num)
{
    int temp = 1, cc = 0;
    f1(i, 0, n)
    {
        cc += abs(a[i] - temp);
        if(temp >= LONG_LONG_MAX / num)
        return LONG_LONG_MAX;
        temp *= num;
    }
    return cc;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    f1(i, 0, n)
    cin>>a[i];

    sort(a, a + n);
    int l = 1, r = mod, cost = mod * 100000;
    while((r - l) >= 3)
    {
        int m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
        
        int f1 = f(m1), f2 = f(m2);
        if(f1 <= f2)
        {
            cost = min(cost, f1);
            r = m2 - 1;
        }
        else
        {
            cost = min(cost, f2);
            l = m1 + 1;
        }
    }
    f1(i, l, r + 1)
    {
        cost = min(cost, f(i));
    }
    cout<<cost<<endl;
    return 0;
}