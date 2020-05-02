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
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string a;
        cin>>a;
        sort(a.begin(), a.end());
        string ans;
        if(a[0] != a[k-1])
        {
            cout<<a[k-1]<<endl;
            continue;
        }
        else
        ans.pb(a[0]);
        int same = 1;
        f1(i,k,n-1)
        if(a[i] != a[i+1]) same = 0;
        if(same == 1)
        {
            cout<<ans;
            string temp;
            f1(i,k,n)
            temp.pb(a[i]);
            f1(i,0,(temp.size()+k-1)/k)
            cout<<temp[i];
            cout<<endl;
            continue;
        }
        cout<<ans;
        f1(i,k,n)
        cout<<a[i];
        cout<<endl;
    }
    return 0;
}