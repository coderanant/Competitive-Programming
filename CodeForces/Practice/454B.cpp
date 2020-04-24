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
    int a[n];
    f1(i,0,n)
    cin>>a[i];
    int mid = -1;
    f1(i,0,n-1)
    {
        if(a[i+1] < a[i])
        {
            if(mid == -1)
            mid = i;
            else
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    if(mid == -1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(a[n-1] > a[0])
    cout<<-1<<endl;
    else
    cout<<n-mid-1<<endl;
    return 0;
}