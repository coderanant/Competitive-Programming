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
    int n;
    cin>>n;
    int a[n+1][n+1];
    memset(a, 0ll, sizeof a);

    f1(i,1,n+1) f1(j,1,n+1) cin>>a[i][j];
    
    int md[2 * n], sd[2 * n];
    memset(md, 0, sizeof md);
    memset(sd, 0, sizeof sd);

    f1(i, 1, n + 1)
    {
        f1(j, 1, n + 1)
        {
            md[i - j + n] += a[i][j];
            sd[i + j - 1] += a[i][j];
        }
    }

    // f1(i,1,2*n)
    // cout<<md[i]<<gp<<sd[i]<<endl;
    int ex , ey, es = -1, ox, oy, os = -1;

    f1(i, 1, n + 1)
    {
        f1(j, 1, n + 1)
        {
            if((i + j) % 2 == 0)
            {
                if(md[i - j + n] + sd[i + j - 1] - a[i][j]  > es)
                {
                    es = md[i - j + n] + sd[i + j - 1] - a[i][j];
                    ex = i; ey = j;
                }
            }
            else
            {
                if(md[i - j + n] + sd[i + j - 1] - a[i][j]  > os)
                {
                    os = md[i - j + n] + sd[i + j - 1] - a[i][j];
                    ox = i; oy = j;
                }
            }
        }
    }
    cout<<os+es<<endl;
    cout<<ex<<gp<<ey<<gp<<ox<<gp<<oy<<endl;
    return 0;
}