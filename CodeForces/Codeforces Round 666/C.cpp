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
    int a[n];
    f1(i, 0, n)
    cin>>a[i];
    if(n == 1)
    {
        cout<<1<<gp<<1<<endl<<-1 * a[0]<<endl;
        cout<<1<<gp<<1<<endl<<0<<endl;
        cout<<1<<gp<<1<<endl<<0<<endl;
        return 0;
    }
    cout<<n<<gp<<n<<endl<<-1 * a[n - 1]<<endl;
    cout<<1<<gp<<n - 1<<endl;
    f1(i, 0, n - 1)
    {
        cout<<(n - 1) * a[i]<<gp;
    }
    cout<<endl;
    cout<<1<<gp<<n<<endl;
    f1(i, 0, n - 1)
    {
        cout<<-1 * a[i] * n<<gp;
    }
    cout<<0<<gp<<endl;
    return 0;
}