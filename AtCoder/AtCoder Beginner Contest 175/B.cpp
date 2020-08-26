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
    int l[n];
    for(int i = 0; i < n; i++)
    cin>>l[i];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                if(l[i] != l[j] && l[j] != l[k] && l[i] != l[k])
                {
                    if(l[i] + l[j] > l[k] && l[j] + l[k] > l[i] && l[i] + l[k] > l[j])
                    {
                        // cout<<i<<gp<<j<<gp<<k<<endl;
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}