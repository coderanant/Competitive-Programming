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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    f1(i, 0, n)
    cin>>a[i];

    priority_queue<pair<int,int>> pq;
    f1(i, 0, n)
    pq.push({a[i], i});
    int ans = 0, last = -1;
    while(pq.size() > 1)
    {
        pair<int,int> fs = pq.top();
        pq.pop();
        if(fs.ss == last)
        {
            pair<int, int> se = pq.top();
            pq.pop();
            pq.push(fs);
            se.ff--;
            last = se.ss;
            if(se.ff > 0)
            pq.push(se);
        }
        else
        {
            fs.ff--;
            last = fs.ss;
            if(fs.ff > 0)
            pq.push(fs);
        }
        ans ^= 1;
    }
    if(ans == 0)
    {
        cout<<"T"<<endl;
    }
    else
    cout<<"HL"<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {
        solve();
    }
    return 0;
}