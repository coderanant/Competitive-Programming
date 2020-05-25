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
        int n, m;
        cin>>n>>m;
        int num = 1ll<<m;
        vector<int> arr;
        f1(i,0,n)
        {
            string s;
            cin>>s;
            reverse(s.begin(), s.end());
            int nn = 0;
            f1(i,0,s.size())
            {
                if(s[i] == '1')
                nn += 1ll<<i;
            }
            arr.pb(nn);
        }
        sort(arr.begin(), arr.end());
        num -= n;
        int med = (num - 1) / 2;

        auto start = 0;
        while(1)
        {
            int ind = upper_bound(arr.begin() + start, arr.end(), med) - arr.begin();
            if(ind == start)
            break;
            med += (ind - start);
            start = ind;
        }
        string ans;
        f1(i,0,m)
        ans += '0';
        f1(i,0,m)
        {
            if(med & (1ll<<i))
            ans[m - 1 - i] = '1';
        }
        cout<<ans<<endl;
    }
    return 0;
}