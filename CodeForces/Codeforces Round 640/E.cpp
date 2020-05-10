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
        vector<int> a(n);
        int hash[8001], count[8001];
        memset(hash, 0,sizeof hash);
        f1(i,0,n)
        {
            cin>>a[i];
            hash[a[i]]++;
        }
        int pre[n];
        pre[0] = a[0];
        f1(i,1,n)
        {
            pre[i] = pre[i-1];
            pre[i] += a[i];
        }
        int ans = 0;
        f1(i,0,n-1)
        {
            f1(j,i+1,n)
            {
                int sum = 0;
                if(i == 0)
                {
                    sum = pre[j];
                }
                else
                {
                    sum = pre[j] - pre[i-1];
                }
                if(sum > n)
                break;
                if(hash[sum] > 0)
                {
                    ans += hash[sum];
                    hash[sum] = 0;
                }
            }
        }
        // sort(a.begin(), a.end());

        cout<<ans<<endl;
    }
    return 0;
}