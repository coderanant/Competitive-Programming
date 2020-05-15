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
#define pp pair<int,pair<int,int>>
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
        vector<int> ans(n + 1);
        priority_queue<pp> pq;
        pq.push({n,{-1,n}});
        int count = 1;
        while(pq.size() != 0)
        {
            pp temp = pq.top();
            pq.pop();
            int mid = -1;
            temp.ss.ff *= -1;
            if((temp.ss.ss - temp.ss.ff + 1) % 2 == 1)
            {
                ans[(temp.ss.ss + temp.ss.ff) / 2] = count;
                mid = (temp.ss.ss + temp.ss.ff) / 2;
                count++;
            }
            else
            {
                ans[(temp.ss.ss + temp.ss.ff - 1) / 2] = count;
                mid = (temp.ss.ss + temp.ss.ff - 1) / 2;
                count++;
            }
            mid--;
            if(mid >= temp.ss.ff)
            {
                pq.push({mid - temp.ss.ff + 1, {-1 * temp.ss.ff, mid}});
            }
            mid += 2;
            if(mid <= temp.ss.ss)
            {
                pq.push({temp.ss.ss - mid + 1, {-1 * mid, temp.ss.ss}});
            }
        }
        f1(i,1,n+1)
        cout<<ans[i]<<gp;
        cout<<endl;
    }
    return 0;
}