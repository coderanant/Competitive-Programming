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
    int sz = n+m;
    string ans;
    if( m < n-1 || m > n*2 + 2)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n > m)
    {
        ans+='0';
        n--;
    }
    else
    {
        if(m > n)
        {
            ans+="11";
            m--;
        }
        else
        ans+='1';
        m--;
    }
    while(n > 0 || m > 0)
    {
        if(ans.back() == '0')
        {
            if(m > n && m >= 2)
            {
                ans+="11";
                m-=2;
            }
            else if(m >= 1)
            {
                ans+='1';
                m--;
            }
        }
        else if(n > 0)
        {
            ans+='0';
            n--;
        }
    }
    // cout<<ans<<endl;
    cout<<ans<<endl;
    return 0;
}