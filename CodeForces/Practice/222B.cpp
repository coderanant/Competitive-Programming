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

    int n, m, k;
    cin>>n>>m>>k;
    int a[n+1][m+1];
    f1(i,1,n+1)
    {
        f1(j,1,m+1)
        {
            cin>>a[i][j];
        }
    }
    int row[n+1], col[m+1];
    f1(i,1,n+1)
        row[i] = i;
    f1(i,0,m+1)
        col[i] = i;

    while(k--)
    {
        char c;
        cin>>c;
        int x,y;
        cin>>x>>y;
        if(c == 'c')
            swap(col[x], col[y]);
        else if(c == 'r')
            swap(row[x], row[y]);
        else
            cout<<a[row[x]][col[y]]<<endl;
    }
    return 0;
}