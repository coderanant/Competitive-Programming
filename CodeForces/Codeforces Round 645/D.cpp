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
    int n, x;
    cin>>n>>x;

    int d[2 * n];
    f1(i,0,n)
    {
        cin>>d[i];
        d[i + n] = d[i];
    }

    reverse(d + 2 * n, d);
    int nxt = 0;
    int count = 0;
    int sum = 0;
    int ans = 0;
    temp = 0;
    f1(i,0,n)
    {
        if(i != 0)
        {
            count -= d[i - 1];
            sum -= (d[i - 1] * (d[i - 1] + 1)) / 2;
            sum -= temp;
        }
        while(count + d[nxt] <= x)
        {
            count += d[nxt];
            sum += (d[nxt] * (d[nxt] + 1)) / 2;
            nxt++;
        }

        temp = x - count;
        temp = d[nxt] * (d[nxt] + 1) / 2 - (d[nxt] - temp) * (d[nxt] - temp + 1) / 2;
        sum += temp;
        
        ans = max(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}