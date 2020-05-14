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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    int w[n+1];
    f1(i,1,n+1)
    cin>>w[i];
    vector<int> stack;

    int b[m];
    f1(i,0,m)
        cin>>b[i];
    
    int arr[n+1];
    memset(arr, 0, sizeof arr);

    f1(i,0,m)
    if(arr[b[i]] == 0)
    {
        stack.pb(b[i]);
        arr[b[i]] = 1;
    }
    f1(i,1,n)
    if(arr[i] == 0) stack.pb(i);

    int ans = 0;

    f1(i,0,m)
    {
        int ind;
        f1(j,0,n)
        {
            if(stack[j] == b[i])
            {
                ind = j;
                break;
            }
            ans += w[stack[j]];
        }
        f2(j,ind,1)
        stack[j] = stack[j-1];
        stack[0] = b[i];
    }
    cout<<ans<<endl;
    return 0;
}