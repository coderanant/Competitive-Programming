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
    int n;
    cin>>n;
    int a[n], sum = 0;
    f1(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }

    sort(a, a+n);

    temp = 0;
    f2(i,n-1,0)
    {
        temp+=a[i];
        if(temp > sum/2)
        {
            cout<<n-i<<endl;
            return 0;
        }
    }
    return 0;
}