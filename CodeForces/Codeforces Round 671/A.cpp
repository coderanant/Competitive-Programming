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
        string s;
        cin>>s;
        if(n % 2 == 0)
        {
            int ans = 1;
            for(int i = 1; i < n + 1; i++)
            {
                if(i % 2 == 0 && (s[i - 1] - '0') % 2 == 0)
                {
                    ans = 2;
                    break;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            int ans = 2;
            for(int i = 1; i < n + 1; i++)
            {
                if(i % 2 == 1 && (s[i - 1] - '0') % 2 == 1)
                {
                    ans = 1;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}