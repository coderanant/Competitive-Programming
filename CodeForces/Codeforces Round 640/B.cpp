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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        if( (n - (k - 1)) % 2 == 1 && n - (k - 1) > 0)
        {
            cout<<"YES"<<endl;
            f1(i,0,k-1)
            cout<<1<<gp;
            cout<<n - (k - 1)<<endl;
        }
        else if((n - 2 * (k - 1)) % 2 == 0 && n - 2 * (k - 1) > 0)
        {
            cout<<"YES"<<endl;
            f1(i,0,k-1)
            cout<<2<<gp;
            cout<<n - 2 * (k - 1)<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}