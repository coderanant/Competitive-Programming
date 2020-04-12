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
vector<int> poss;
void produce(int num)
{
    if(num > 10000000000)
    return ;

    poss.pb(num);
    produce(num*10 + 4);
    produce(num*10 + 7);
    return ;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l, r;
    cin>>l>>r;
    produce(4);
    produce(7);

    sort(poss.begin(), poss.end());

    int ans = 0;
    f1(i,0,poss.size())
    {
        if(poss[i]>=l && poss[i]<=r)
        {
            ans += poss[i]*(poss[i] - l + 1);
            l = poss[i]+1;
            if(l>r)
            break;
        }
        else if(poss[i] > r)
        {
            ans += (poss[i]*(r-l+1));
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}