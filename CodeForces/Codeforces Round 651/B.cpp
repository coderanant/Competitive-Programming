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
        int a[2 * n];
        f1(i,0,2 * n)
        cin>>a[i];
        int num = 0;
        f1(i,0,2 * n)
        {
            if(num == n - 1)
            break;
            if(a[i] == -1)
            continue;
            f1(j,i + 1,2 * n)
            {
                if(a[j] == -1)
                continue;
                if((a[j] + a[i]) % 2 == 0)
                {
                    cout<<i + 1<<gp<<j + 1<<endl;
                    a[i] = -1;
                    a[j] = -1;
                    num++;
                    break;
                }
            }
        }
    }
    return 0;
}