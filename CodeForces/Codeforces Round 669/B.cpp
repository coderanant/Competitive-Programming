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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        f1(i, 0, n)
        cin>>a[i];

        sort(a, a + n);
        cout<<a[n - 1]<<gp;
        int gcd = a[n - 1];
        a[n - 1] = -1;
        f1(i, 0, n - 1)
        {
            int maxg = 0;
            int maxi = -1;
            f1(j, 0, n)
            {
                if(a[j] != -1)
                {
                    if(__gcd(a[j], gcd) > maxg)
                    {
                        maxg = __gcd(a[j], gcd);
                        maxi = j;
                    }
                }
            }
            cout<<a[maxi]<<gp;
            gcd = maxg;
            a[maxi] = -1;
        }
        cout<<endl;
    }
    return 0;
}