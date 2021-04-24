/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i, a, b) for (int i = a; i < b; i++)
#define f2(i, a, b) for (int i = a; i >= b; i--)
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

int ans[501][501];
int n;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
void dfs(int x, int y, int num, int &left, int flag) {
    if(x < 0 || y < 0 || x >= n || y >= n)
    return ;
    if(ans[x][y] != -1) return ;
    if(x == y && flag != 1) return ;
    if(left <= 0) return ;
    ans[x][y] = num;
    left--;
    for(int i = 0; i < 4; i++) {
        dfs(x + dx[i], y + dy[i], num, left, 0);
    }
    return ;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans[i][j] = -1;
        }
    }

    // for(int i = 0; i < n; i++) 
    // ans[i][i] = p[i];
    for(int i = n - 1; i >= 0; i--) {
        dfs(i, i, p[i], p[i], 1);
        // for(int k = 0; k < n; k++) {
        //     for(int j = 0; j <= k; j++) {
        //         cout<<ans[k][j]<<' ';
        //     }
        //     cout<<endl;
        // }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}