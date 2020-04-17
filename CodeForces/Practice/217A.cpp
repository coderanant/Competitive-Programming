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

int parent[101]; // 1e6 by default
int siz[101]; // 1e6 by default
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
    
    int n;
    cin>>n;
    int x[n+1], y[n+1];
    f1(i,1,n+1)
    cin>>x[i]>>y[i];

    f1(i,1,n+1)
    make_set(i);

    f1(i,1,n+1)
    {
        f1(j,1,n+1)
            if(x[i] == x[j] || y[i] == y[j])
                union_sets(i, j);
    }
    f1(i,1,n+1)
    {
        f1(j,1,n+1)
            if(x[i] == x[j] || y[i] == y[j])
                union_sets(i, j);
    }

    set<int> se;
    f1(i,1,n+1)
    {
        se.insert(parent[i]);
    }

    cout<<se.size()-1<<endl;
    return 0;
}