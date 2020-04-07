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
    int r,g,b;
    cin>>r>>g>>b;
    int ans = 0;
    ans = min({r,g,b});
    r -= ans;
    g -= ans;
    b -= ans;
    int ans2 = (r/3 + g/3 + b/3);
    int flag = 0;
    r%=3;
    g%=3;
    b%=3;
    if(r == 2)
    flag++;
    if(g==2)
    flag++;
    if(b==2)
    flag++;

    if(flag == 2 && ans)
    ans2++;
    cout<<ans+ans2<<endl;
    return 0;
}