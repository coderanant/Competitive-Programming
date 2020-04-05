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

int findnex(int a)
{
    vector<int> ans;
    while(a)
    {
        int rem = a%10;
        ans.pb(rem);
        a/=10;
    }

    // reverse(ans.begin(),ans.end());
    int flag = -1;
    f1(i,0,ans.size()-1)
    {
        if( abs (ans[i]+1-ans[i+1])  <2 && ans[i]<9)
        {
            ans[i]++;
            flag = i;
            break;
        }
    }
    if(flag == -1 && ans[ans.size()-1]<9)
    {
        flag = ans.size()-1;
        ans[ans.size()-1]++;
    }
    if(flag!=-1)
    {
        f2(i,flag-1,0)
        {
            ans[i] = max(0ll, ans[i+1]-1);
        }
        int num = 0;
        f2(i,ans.size()-1,0)
        {
            num*=10;
            num+=ans[i];
        }
        return num;
    }
    else
    {
        int num = 10;
        f2(i,ans.size()-2,0)
        {
            num*=10;
            num+=0;
        }
        return num;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    int a[k+1];
    a[1] = 1;
    f1(i,2,k+1)
    {
        a[i] = findnex(a[i-1]);
        // cout<<i<<gp<<a[i]<<endl;
    }
    cout<<a[k]<<endl;
    return 0;
}