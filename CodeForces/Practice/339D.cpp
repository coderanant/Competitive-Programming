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
int n;

int tree[1ll<<18];

void update(int k) 
{
    k += n;
    int flag = 0;
    for (k /= 2; k >= 1; k /= 2) 
    {
        if(flag) tree[k] = tree[2*k] ^ tree[2*k+1];
        else tree[k] = tree[2*k] | tree[2*k+1];
        flag ^= 1;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    n = 1ll<<n;
    memset(tree, 0ll, sizeof tree);

    f1(i,0,n)
    {
        cin>>tree[i+n];
        update(i + n);
    }

    while(m--)
    {
        int p, q;
        cin>>p>>q;
        tree[p + n - 1] = q;
        update(p + n - 1);
        cout<<tree[1]<<endl;
    }

    return 0;
}