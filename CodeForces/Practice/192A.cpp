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
    
    map<int,int> mp;
    for(int i = 1; i*(i+1)/2 <= n ; i++)
    {
        mp[i * (i + 1) / 2ll] = 1;
    }

    for( auto i : mp)
    {
        if( i.ff >= n)
        break;
        if( mp.find(n - i.ff) != mp.end() )
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}