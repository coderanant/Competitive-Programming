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
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;

    vector<pair<int,int>> ans;
    f1(i,0,a)
    {
        cin>>temp;
        ans.pb(mp(temp, 1));
    }

    f1(i,0,b)
    {
        cin>>temp;
        ans.pb(mp(temp, 2));
    }

    f1(i,0,c)
    {
        cin>>temp;
        ans.pb(mp(temp, 3));
    }

    sort(ans.begin(), ans.end(), greater<pair<int,int>> ());

    int sum = 0, buff = 0;
    f1(i,0,a+b+c)
    {
        if(x + y + buff <= 0)
        break;

        if(ans[i].ss == 1 && x > 0)
        {
            sum += ans[i].ff;
            x--;
        }
        else if(ans[i].ss == 2 && y > 0)
        {
            sum += ans[i].ff;
            y--;
        }
        else if(ans[i].ss == 3)
        {
            sum += ans[i].ff;
            buff--;
        }
    }

    cout<<sum<<endl;

    return 0;
}