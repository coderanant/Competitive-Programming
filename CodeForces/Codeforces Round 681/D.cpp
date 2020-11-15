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
        {
            cin>>a[i];
        }
        int diff = mod;
        f1(i, 0, n)
        {
            temp = a[i];
            int mini = min(diff, a[i]);
            if(i > 0)
            mini = min(mini, max(0ll, a[i] - a[i - 1]));
            a[i] -= mini;
            diff = temp - a[i];
        }

        diff = mod;
        f2(i, n - 1, 0)
        {
            temp = min(diff, a[i]);
            a[i] -= min(diff, a[i]);
            diff = temp;
        }
        
        int ans1 = 1;
        f1(i, 0, n)
        {
            if(a[i] != 0)
            ans1 = 0;
        }
        if(ans1 == 1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}