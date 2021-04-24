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
    while(t--) {
        int n;
        cin>>n;
        vector<int> a;
        int num = 2050;
        while(num < 1e18) {
            a.pb(num);
            num *= 10;
        }
        int ans = 0;
        for(int i = a.size() - 1; i >= 0; i--) {
            ans += n / a[i];
            n = n - (n / a[i]) * a[i];
            // cout<<a[i]<<' '<<n<<" "<<ans<<endl;
        }
        if(n != 0)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}