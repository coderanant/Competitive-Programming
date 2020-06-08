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

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n];
    f1(i,0,n)
    cin>>a[i];
    int zer = 0, one = 0;
    f1(i,0,n)
    {
        cin>>b[i];
        if(b[i] == 0)
        zer++;
        else
        one++;
    }
    if(zer == 0 || one == 0)
    {
        f1(i,1,n)
        {
            if(a[i] < a[i - 1])
            {
                cout<<"No"<<endl;
                return ;
            }
        }
        cout<<"Yes"<<endl;
        return ;
    }
    else
    cout<<"Yes"<<endl;
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