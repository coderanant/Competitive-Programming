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
    int a, b;
    cin>>a>>b;
    temp = __gcd(a, b);
    a/=temp;
    b/=temp;
    int ans = 0;
    while(a!=1)
    {
        if(a%5 == 0)
        a/=5;
        else if(a%3 == 0)
        a/=3;
        else if(a%2 == 0)
        a/=2;
        else
        break;
        ans++;
    }
    while(b!=1)
    {
        if(b%5 == 0)
        b/=5;
        else if(b%3 == 0)
        b/=3;
        else if(b%2 == 0)
        b/=2;
        else
        break;
        ans++;
    }
    if(a==1 && b==1)
    cout<<ans<<endl;
    else
    cout<<-1<<endl;
    return 0;
}