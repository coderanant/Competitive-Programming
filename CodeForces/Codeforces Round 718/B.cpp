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
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<priority_queue<int, vector<int>, greater<int>>> b(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin>>temp;
                b[i].push(temp);
            }
        }

        int ans[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++)
            ans[i][j] = -1;
        }

        for(int i = 0; i < m; i++) {
            int min = mod, mini;
            for(int j = 0; j < n; j++) {
                if(b[j].top() < min) {
                    min = b[j].top();
                    mini = j;
                }
            }
            ans[mini][i] = min;
            b[mini].pop();
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(ans[i][j] == -1) {
                    ans[i][j] = b[i].top();
                    b[i].pop();
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout<<ans[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}