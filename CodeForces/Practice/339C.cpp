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
int m;
vector<int> ans;
string s;

int dfs(int x, int last, int k)
{
    if(abs(x) > 10)
        return 0;
    if(k == m)
        return 1;
    
    f1(i,1,11)
    {
        if(s[i-1] == '1' && last != i)
        {
            if(x <= 0 && x + i > 0)
            {
                ans.pb(i);
                int temp = dfs(x+i, i, k+1);
                if(!temp)
                ans.pop_back();
                else
                return 1;
            }
            else if(x > 0 && x - i < 0)
            {
                ans.pb(i);
                int temp = dfs(x-i, i, k+1);
                if(!temp)
                ans.pop_back();
                else
                return 1;
            }
        }
    }
    return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>m;
    
    int temp = dfs(0, 0, 0);
    if(!temp)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        f1(i,0,m)
        cout<<ans[i]<<gp;
        cout<<endl;
    }
    return 0;
}