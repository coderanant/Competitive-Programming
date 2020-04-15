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

const int mod=1e15;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int m;
    cin>>m;
    while( m-- )
    {
        int w, h;
        cin>>w>>h;
        int hi = max(a[w-1], a[0]);
        cout<<hi<<endl;
        hi+=h;
        a[w-1] = a[0] = hi;
    }

    return 0;
}