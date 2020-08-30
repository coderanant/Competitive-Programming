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
    string s, t;
    cin>>s>>t;
    int n = s.size(), m = t.size();
    int ans = n;
    for(int i = 0; i <= n - m; i++)
    {
        temp = 0;
        for(int j = 0, k = i; j < m; j++, k++)
        {
            if(s[k] != t[j])
            temp++;
        }
        ans = min(ans, temp);
    }
    cout<<ans<<endl;
    return 0;
}