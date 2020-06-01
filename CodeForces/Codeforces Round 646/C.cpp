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

vector<int> adj[1001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        f1(i,1,n + 1)
        adj[i].clear();

        f1(i,1,n)
        {
            int a, b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        if(adj[x].size() <= 1)
        cout<<"Ayush"<<endl;
        else
        {
            if((n - 2) % 2 == 0)
            {
                cout<<"Ayush"<<endl;
            }
            else
            cout<<"Ashish"<<endl;
        }
    }
    return 0;
}