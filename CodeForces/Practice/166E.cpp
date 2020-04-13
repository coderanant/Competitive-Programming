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
    int n;
    cin>>n;

    int a = 1, b = 1, c = 1, d = 0;
    f1(i,2,n+1)
    {
        int td = d, ta = a, tb = b, tc = c;
        d = (ta + tb + tc) % mod;
        a = (tb + tc + td) % mod;
        b = (ta + tc + td) % mod;
        c = (ta + tb + td) % mod;
    }

    cout<<d<<endl;
    return 0;
}