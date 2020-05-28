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

// const int mod=1000000007;
ll temp;

int tree[1000001], n;
int sum(int k) 
{
    int s = 0;
    while (k >= 1) 
    {
        s += tree[k];
        k -= k&-k;
    }
    return s;
}

void add(int k, int x) 
{
    while (k <= n) 
    {
        tree[k] += x;
        k += k&-k;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>n>>q;
    f1(i,0,n)
    {
        cin>>temp;
        add(temp, 1);
    }
    while(q--)
    {
        cin>>temp;
        if(temp > 0)
        {
            add(temp, 1);
        }
        else
        {
            temp *= -1;
            int l = 1, r = n;
            int ind = -1;
            while(l <= r)
            {
                int mid = (l + r) / 2;
                if(sum(mid) >= temp)
                {
                    ind = mid;
                    r = mid - 1;
                }
                else
                l = mid + 1;
            }
            add(ind, -1);
        }
    }
    f1(i,1,n + 1)
    {
        if(tree[i] > 0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}