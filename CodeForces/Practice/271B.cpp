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

int prime[1000000];
void sieve()
{
    f1(i,0,1000000)
    prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i <= 1000000; i++)
    {
        if(prime[i] == 1)
        {
            for(int j = i*i; j < 1000000; j+=i)
            prime[j] = 0;
        }
    }
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n][m];
    f1(i,0,n)
    f1(j,0,m)
    cin>>a[i][j];

    sieve();
    
    int ans = mod;
    f1(i,0,n)
    {
        temp = 0;
        f1(j,0,m)
        {
            int k = a[i][j];
            while(1)
            {
                if(prime[k] == 1)
                {
                    temp += k-a[i][j];
                    a[i][j] = k-a[i][j];
                    break;
                }
                k++;
            }
        }
        ans = min(ans, temp);
    }

    f1(i,0,m)
    {
        temp = 0;
        f1(j,0,n)
        {
            temp += a[j][i];
        }
        ans = min(ans, temp);
    }
    cout<<ans<<endl;
    return 0;
}