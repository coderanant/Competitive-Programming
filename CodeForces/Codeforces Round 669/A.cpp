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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int one = 0, zer = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp)
            one++;
            else
            zer++;
        }
        if(zer >= one)
        {
            cout<<zer<<endl;
            f1(i, 0, zer)
            cout<<0<<gp;
            cout<<endl;
        }
        else
        {
            one = one / 2 * 2;
            cout<<one<<endl;
            f1(i, 0, one)
            cout<<1<<gp;
            cout<<endl;
        }
    }
    return 0;
}