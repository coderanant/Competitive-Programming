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
    vector<int> a(n);
    
    int mini = mod, ind = 0;
    f1(i,0,n)
    {
        cin>>a[i];
        if(a[i] == x)
        temp = 1;
    }

    int ans = 0, tot = n;
    if(temp == 0)
    {
        a.pb(x);
        tot++;
        ans++;
    }
    sort(a.begin(), a.end());
    f1(i,0,tot)
    {
        if(a[i] == x)
        {
            if(abs(i - (tot-1)/2) < mini)
            {
                mini = abs(i - (tot-1)/2);
                ind = i;
            }
        }
    }
    while(1)
    {
        // cout<<ind<<gp<<ans<<endl;
        if (ind == (tot - 1) / 2)
        break;

        else if( ind < (tot-1)/2)
            ind++;
        tot++;
        ans++;
    }

    cout<<ans<<endl;
    return 0;
}