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
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a + n);
    int ind = (n - 1) / 2;
    ind--;
    int ans = 0;
    int ind2 = n - 2;
    vector<int> ansi;
    int taken[n];
    memset(taken, 0, sizeof taken);
    ansi.pb(a[n - 1]);
    taken[n - 1] = 1;
    while(ind >= 0)
    {
        if(a[ind] < a[ind2])
        {
            ansi.pb(a[ind]);
            ansi.pb(a[ind2]);
            taken[ind2] = 1;
            taken[ind] = 1;
            ans++;
            ind2--;
            ind--;
        }
        else
        {
            ind--;
        }
    }
    cout<<ans<<endl;
    for(int i = 0; i < ansi.size(); i++)
    cout<<ansi[i]<<gp;
    for(int i = 0; i < n; i++)
    if(taken[i] == 0) cout<<a[i]<<gp;
    cout<<endl;
    return 0;
}