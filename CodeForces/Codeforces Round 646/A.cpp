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
        int n, x;
        cin>>n>>x;
        int a[n];
        int odd = 0, even = 0;
        f1(i,0,n)
        {
            cin>>a[i];
            if(a[i] % 2 == 0)
            even++;
            else
            odd++;
        }
        if(odd == 0)
        {
            cout<<"No"<<endl;
            continue;
        }
        temp = x - 1;
        temp -= min(temp / 2 * 2, (odd - 1) / 2 * 2);
        temp -= min(temp, even);
        if(temp == 0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}