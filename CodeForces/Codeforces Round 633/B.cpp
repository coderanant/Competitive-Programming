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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        f1(i,0,n)
        cin>>a[i];

        sort(a, a+n);

        vector<int> ans;

        n--;
        ans.pb(a[n/2]);
        int low = n/2 - 1;
        int high = n/2 + 1;
        n++;
        temp = 0;
        while(1)
        {
            if(ans.size() == n)
            break;
            if(temp == 0)
            {
                ans.pb(a[high]);
                high++;
                temp = 1;
            }
            else
            {
                ans.pb(a[low]);
                low--;
                temp = 0;
            }
        }
        f1(i,0,ans.size())
        cout<<ans[i]<<gp;
        cout<<endl;
    }
    return 0;
}