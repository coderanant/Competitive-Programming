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

// Don't forget to initialise parent and siz.
int parent[200001]; // 1e6 by default
int siz[200001]; // 1e6 by default
int ans[200001];
void make_set(int v) 
{
    parent[v] = v;
    siz[v] = 1;
}

int find_set(int v) 
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) 
{
    a = find_set(a);
    b = find_set(b);
    if (a != b) 
    {
        if (siz[a] < siz[b])
            swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    f1(i, 1, n + 1)
    make_set(i);
    f1(i, 0, m)
    {
        int a, b;
        cin>>a>>b;
        union_sets(a, b);
    }
    memset(ans, 0, sizeof ans);
    f1(i, 1, n + 1)
    {
        ans[find_set(i)]++;
    }
    int final = 0;
    f1(i, 1, n + 1)
    {
        final = max(final, ans[i]);
    }
    cout<<final<<endl;
    return 0;
}