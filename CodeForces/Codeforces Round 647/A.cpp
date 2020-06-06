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
        int a, b;
        cin>>a>>b;
        if(a > b)
        swap(a, b);
        if(b == a)
        {
            cout<<0<<endl;
            continue;
        }
        else if(b % a == 0)
        {
            int temp = 0;
            while(1)
            {
                if(a >= b)
                break;
                a *= 2;
                temp++;
            }
            if(a == b)
            {
                int ans = temp / 3;
                temp %= 3;
                ans += temp / 2;
                temp %= 2;
                ans += temp;
                cout<<ans<<endl;
                continue;
            }
            else
            {
                cout<<-1<<endl;
                continue;
            }
        }
        else
        cout<<-1<<endl;
    }
    return 0;
}