#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define f1(i,a,b) for(int i = a; i< b; i++)
#define mp make_pair
signed main()
{
    int n;
    cin>>n;
    int ans = (n * (n-1))/2;
    set<pair<int,int>> ss;
    f1(i,0,10)
    {
        int node;
        cin>>node;

        f1(j,1,10)
        {
            int temp;
            cin>>temp;
            node < temp ? ss.insert(mp(node, temp)) : ss.insert(mp(temp, node));
        }
    }
    
    ans -= ss.size();
    cout<<ans<<endl;
    return 0;
}