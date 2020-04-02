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
    int n,m;
    cin>>n>>m;
    int a[n+1];
    f1(i,1,n+1)
    cin>>a[i];
    temp = 0;
    while(m--)
    {
        int q;
        cin>>q;
        if(q == 1)
        {
            int b,c;
            cin>>b>>c;
            a[b] = c - temp;
        }
        else if(q==2)
        {
            int b;
            cin>>b;
            temp+=b;
        }
        else
        {
            int b;
            cin>>b;
            cout<<a[b]+temp<<endl;
        }
    }
    return 0;
}