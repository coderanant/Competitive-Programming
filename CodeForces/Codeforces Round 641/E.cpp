/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair
#define pp pair<int,int>
// const int mod=1e18 + 1;
ll temp;
int n ,m;
int arr[1000][1000];
bool check(int x, int y)
{
    if(x >= 0 && x < n and y >= 0 && y < m)
    return true;
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>n>>m>>t;
    vector<string> v(n);
    f1(i,0,n)
    cin>>v[i];
    f1(i,0,n) f1(j,0,m) arr[i][j] = 0;

    queue<pp> q;
    f1(i,0,n)
    {
        f1(j,0,m)
        {
            if(check(i - 1, j) and v[i-1][j] == v[i][j])
            {
                arr[i][j] = 1;
                q.push({i, j});
            }
            else if(check(i + 1, j) and v[i+1][j] == v[i][j])
            {
                arr[i][j] = 1;
                q.push({i, j});
            }
            else if(check(i, j - 1) and v[i][j - 1] == v[i][j])
            {
                arr[i][j] = 1;
                q.push({i, j});
            }
            else if(check(i, j + 1) and v[i][j + 1] == v[i][j])
            {
                arr[i][j] = 1;
                q.push({i, j});
            }
        }
    }

    while(q.empty() == 0)
    {
        pp temp = q.front();
        q.pop();
        int i = temp.ff, j = temp.ss, p = arr[i][j];
        if(check(i - 1, j) and arr[i-1][j] == 0)
        {
            arr[i - 1][j] = p + 1;
            q.push({i - 1, j});
        }
        if(check(i + 1, j) and arr[i+1][j] == 0)
        {
            arr[i + 1][j] = p + 1;
            q.push({i + 1, j});
        }
        if(check(i, j - 1) and arr[i][j-1] == 0)
        {
            arr[i][j - 1] = p + 1;
            q.push({i, j - 1});
        }
        if(check(i, j + 1) and arr[i][j+1] == 0)
        {
            arr[i][j + 1] = p + 1;
            q.push({i, j + 1});
        }
    }

    while(t--)
    {
        int x, y;
        ll p;
        cin>>x>>y>>p;
        x--; y--;
        if(p < arr[x][y] || ( p - arr[x][y]) % 2 == 1 || arr[x][y] == 0)
        cout<<v[x][y]<<endl;
        else
        {
            if(v[x][y] == '0')
            cout<<1<<endl;
            else
            cout<<0<<endl;
        }
    }
    return 0;
}