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
    int sum = 0;
    f1(i,0,n)
    {
        cin>>a[i];
        sum += a[i];
    }
    if(sum % 3 != 0)
    {
        cout<<0<<endl;
        return 0;
    }
    // cout<<sum<<endl;
    int suff[n];
    memset(suff, 0, sizeof(suff));
    temp = 0;
    f2(i,n-1,2)
    {
        temp += a[i];
        if(temp == sum / 3)
        suff[i] = 1;
    }
    f2(i,n-2,2)
    {
        suff[i] += suff[i+1];
    }   
    temp = 0;
    int ans = 0;
    f1(i,0,n-2)
    {
        temp+=a[i];
        if(temp == sum / 3)
        {
            ans += suff[i+2];
        }
    }
    cout<<ans<<endl;
    return 0;
}