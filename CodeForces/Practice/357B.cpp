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
    int a[m][3];
    f1(i,0,m)
    {
        f1(j,0,3)
            cin>>a[i][j];
    }
    
    int ans[n+1];
    memset(ans,0,sizeof(ans));
    f1(i,0,m)
    {
        int temp[4];
        memset(temp,0,sizeof(temp));

        f1(j,0,3)
        {
            if(ans[a[i][j]] != 0)
            {
                temp[ans[a[i][j]]] = 1;
            }
        }
        f1(j,0,3)
        {
            if(ans[a[i][j]] != 0)
            {
                continue;
            }
            f1(k,1,4)
            {
                if(temp[k] == 0)
                {
                    temp[k] = 1;
                    ans[a[i][j]] = k;
                    break;
                }
            }
        }
    }
    f1(i,1,n+1)
    {
        if(ans[i]==0)
        ans[i] = 1;
    }

    f1(i,1,n + 1)
    cout<<ans[i]<<gp;
    return 0;
}
