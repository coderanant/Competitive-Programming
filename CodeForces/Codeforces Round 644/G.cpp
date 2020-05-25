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

const int mod=1000000007;
ll temp;

void solve()
{
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    if (n * a != m * b)
    {
        cout<<"NO"<<endl;
        return ;
    }

    int arr[n][m];
    f1(i,0,n) f1(j,0,m) arr[i][j] = 0;

    f1(i,0,n)
    {
    
        f1(j,(i + 1) * a, (i + 2) * a)
        {
            arr[i][j % m] = 1;
        }
    }
    cout<<"YES"<<endl;
    f1(i,0,n)
    {
        f1(j,0,m) cout<<arr[i][j];
        cout<<endl;
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}