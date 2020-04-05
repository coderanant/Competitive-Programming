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
    int n,m;
    cin>>n>>m;
    int a[n];
    int sum = 0;
    f1(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long double num = (long double)sum/(4.00*m);
    int ans = 0;
    f1(i,0,n)
    {
        if(a[i]>=num)
        ans++;
    }
    if(ans>=m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    return 0;
}