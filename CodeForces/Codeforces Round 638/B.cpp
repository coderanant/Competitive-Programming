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
        int a[n];
        f1(i,0,n)
        cin>>a[i];

        set<int> temp;
        f1(i,0,n)
        temp.insert(a[i]);
        // int no = 0;
        if(temp.size() > k)
        {
            cout<<-1<<endl;
            continue;
        }

        vector<int> km;
        int hash[101];
        memset(hash, 0, sizeof(hash));
        f1(i,0,n)
        {
            if(hash[a[i]] != 1)
            km.pb(a[i]);
            hash[a[i]] = 1;
        }
        while(km.size() != k)
        km.pb(km[0]);
        cout<<n*k<<endl;
        f1(i,0,n)
        {
            f1(j,0,k)
            cout<<km[j]<<gp;
        }
        cout<<endl;
    }
    return 0;
}