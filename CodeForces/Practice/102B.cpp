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
int ans;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int sum = 0;
    f1(i,0,s.size())
    sum+=(s[i]-'0');

    if(s.size() == 1)
    ans = 0;
    else
    ans = 1;
    while(1)
    {
        if(sum/10 == 0)
        break;
        ans++;
        temp = sum;
        sum = 0;
        while(temp)
        {
            sum += (temp % 10);
            temp /= 10;
        }
    }

    cout<<ans<<endl;
    return 0;
}