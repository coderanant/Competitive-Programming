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

vector<int> ans;

void func(int num)
{
    if(num>10000000000)
    return;
    
    temp = num;
    int num4 = 0, num7 = 0;
    while(temp)
    {
        if(temp%10 == 4)
        num4++;
        else
        num7++;
        temp/=10;
    }
    if(num4 == num7)
    ans.pb(num);
    func(num*10+4);
    func(num*10+7);
    return;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    func(4);
    func(7);

    sort(ans.begin(), ans.end());
    
    f1(i,0,ans.size())
    if(ans[i]>=n)
    {
        cout<<ans[i]<<endl;
        break;
    }
    return 0;
}