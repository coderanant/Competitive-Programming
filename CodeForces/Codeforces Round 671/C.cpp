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
        int flag = 0, sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == x)
            flag++;
            sum += a[i];
        }
        if(flag == n)
        cout<<0<<endl;
        else if(sum == x * n)
        cout<<1<<endl;
        else if(flag >= 1)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
    return 0;
}