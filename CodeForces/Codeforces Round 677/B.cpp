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
        int ans = 0;
        int flag = 0;
        temp = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                if(flag == 1)
                temp++;
            }
            else if(a[i] == 1)
            {
                if(flag == 0)
                flag = 1;
                ans += temp;
                temp = 0;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}