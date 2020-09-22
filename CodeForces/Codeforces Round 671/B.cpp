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
        int x;
        cin>>x;
        int ans = 0, curr = 1, sum = 0, mul = 1;
        while(1)
        {
            sum += (curr * (curr + 1)) / 2;
            mul *= 2;
            curr += mul;
            if(sum <= x)
            ans++;
            else
            break;
        }
        cout<<ans<<endl;
    }
    return 0;
}