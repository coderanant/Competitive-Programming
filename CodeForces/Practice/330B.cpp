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
    int n,m;
    cin>>n>>m;
    int ans[n];
    memset(ans,0,sizeof(ans));

    f1(i,0,m)
    {
        int a,b;
        cin>>a>>b;
        ans[a-1]=ans[b-1]=1;
    }
    int pivot = -1;
    f1(i,0,n)
    {
        if(!ans[i])
        {
            pivot = i;
            break;
        }
    }

    cout<<n-1<<endl;
    f1(i,0,n)
    {
        if(i!=pivot)
        {
            cout<<pivot+1<<gp<<i+1<<endl;
        }
    }
    return 0;
}