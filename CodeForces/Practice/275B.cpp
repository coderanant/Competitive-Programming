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

pair<int,int> solve (int n, int m, int flag)
{
    int sz = n+m-1;

    vector<int> ans;
    while(1)
    {
        if(n == 0 && m == 0)
        break;

        if(n>0 && m>0)
        {
            if(flag)
            {
                ans.pb(0);
                ans.pb(1);
                n--; m--;
                flag = 0;
            }
            else
            {
                ans.pb(1);
                ans.pb(0);
                n--; m--;
                flag = 1;
            }
        }
        else if(n>0)
        {
            ans.pb(0);
            n--;
        }
        else 
        {
            ans.pb(1);
            m--;
        }
        
    }
    int pet = 0, vas = 0;
    f1(i,0,sz)
    {
        if(ans[i] == ans[i+1])
        pet++;
        else
        vas++;
    }
    return mp(pet, vas);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;

    pair<int,int> ans1, ans2;
    ans1 = solve(n, m, 0ll);
    ans2 = solve(n, m, 1ll);
    
    if(ans1.ff > ans2.ff)
    cout<<ans1.ff<<gp<<ans1.ss<<endl;
    else
    cout<<ans2.ff<<gp<<ans2.ss<<endl;
    return 0;
}