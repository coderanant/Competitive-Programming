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

int a[505][505][22];
int n, m, k;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int cost1[501][501], cost2[501][501];

int dfs(int x, int y, int z) {
    // cout<<x<<" "<<y<<" "<<z<<endl;
    if (a[x][y][z] != -1) return a[x][y][z];

    int ans = mod;
    int nx = x - 1, ny = y;
    if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
        ans = min(ans, dfs(nx, ny, z - 2) + 2 * cost2[x - 1][y]);
    }
    nx = x + 1, ny = y;
    if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
        ans = min(ans, dfs(nx, ny, z - 2) + 2 * cost2[x][y]);
    }
    nx = x, ny = y + 1;
    if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
        ans = min(ans, dfs(nx, ny, z - 2) + 2 * cost1[x][y]);
    }
    nx = x, ny = y - 1;
    if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
        ans = min(ans, dfs(nx, ny, z - 2) + 2 * cost1[x][y - 1]);
    }
    a[x][y][z] = ans;
    return ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            for (int x = 0; x <= k; x++) {
                a[i][j][x] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            cin >> cost1[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cost2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j][0] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j][k] = dfs(i, j, k);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (k % 2 == 0)
                cout << a[i][j][k] << ' ';
            else
                cout << -1 << ' ';
        }
        cout << endl;
    }

    // for (int i = 0; i <= k; i++) {
    //     cout << i << endl;
    //     for (int j = 0; j < n; j++) {
    //         for (int z = 0; z < m; z++) {
    //             cout << a[j][z][i] << ' ';
    //         }
    //         cout << endl;
    //     }
    // }
    return 0;
}