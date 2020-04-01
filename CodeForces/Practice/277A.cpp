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
    
    f1(i,0,101)
    make_set(i);
    
    int n,m;
    cin>>n>>m;
    vector<int> arr[m+1];
    int flag = 0;
    f1(i,0,n)
    {
        cin>>temp;
        if(temp)
        flag = 1;
        f1(j,0,temp)
        {
            int tem;
            cin>>tem;
            arr[tem].pb(i);
        }
    }
    f1(i,1,m+1)
    {
        f1(j,0,arr[i].size())
        {
            f1(k,j+1,arr[i].size())
            {
                union_sets(arr[i][j], arr[i][k]);
            }
        }
    }

    set<int> ans;
    f1(i,0,n)
    {
        ans.insert(find_set(i));
    }
    if(flag)
    cout<<ans.size()-1<<endl;
    else
    cout<<ans.size()<<endl;
    return 0;
}