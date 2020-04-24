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
int n, m, k;
int vis[501][501];
string arr[501];

int dfs(int x, int y)
{
    if(x < 0 || y < 0 || x >= n || y >= m)
    return 0;
    if(arr[x][y] == '#')
    return 0;
    if(vis[x][y] == 1)
    return 0;

    vis[x][y] = 1;
    int val = 0;
    val = dfs(x-1, y) + dfs(x+1, y) + dfs(x, y+1) + dfs(x, y-1);
    if(val == 0 && k > 0)
    {
        arr[x][y] = 'X';
        k--;
        return 0;
    }
    return 1 + val;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    f1(i,0,n)
    cin>>arr[i];

    f1(i,0,n)
    {
        f1(j,0,m)
        {
            if(arr[i][j] == '.')
            {
                dfs(i, j);
                temp = 1;
                break;
            }
        }
        if(temp)
        break;
    }
    f1(i,0,n)
    {
        f1(j,0,m)
        cout<<arr[i][j];
        cout<<endl;
    }
    return 0;
}