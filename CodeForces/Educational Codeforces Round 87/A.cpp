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
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if(b >= a)
        {
            cout<<b<<endl;
            continue;
        }
        a -= b;
        if(c <= d)
        {
            cout<<-1<<endl;
            continue;
        }
        temp = c - d;
        int ans = (a + temp - 1) / temp;
        cout<<b + ans * c<<endl;
        
    }
    return 0;
}