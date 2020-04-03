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
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int ans = 0, flag = 0;
    f1(i,0,n)
    {
        if(a[i] == i)
        ans++;
        else if(flag == 0)
        {
            if(a[a[i]] == i)
            {
                ans+=2;
                flag = 1;
            }
        }
    }
    if(ans < n && flag == 0)
    ans++;
    cout<<ans<<endl;
    return 0;
}