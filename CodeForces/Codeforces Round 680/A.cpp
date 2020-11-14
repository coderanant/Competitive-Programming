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
        int n, x;
        cin>>n>>x;
        int a[n];
        f1(i, 0, n)
        cin>>a[i];
        int b[n];
        f1(i, 0, n)
        cin>>b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int> ());
        int ans = 1;
        f1(i, 0, n)
        {
            if(a[i] + b[i] > x)
            ans = 0;
        }
        if(ans)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}