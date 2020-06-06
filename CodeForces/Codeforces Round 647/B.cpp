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
        int arr[1025];
        memset(arr, 0, sizeof(arr));
        vector<int> a;
        f1(i,0,n)
        {
            cin>>temp;
            a.pb(temp);
            arr[temp] = 1;
        }
        int ans[1025];
        memset(ans, 0, sizeof(ans));
        f1(i,0,n)
        {
            f1(j,i+1,n)
            {
                ans[a[i] ^ a[j]] = 1;
            }
        }
        int prr[1025];

        vector<int> final;
        f1(i,0,1025)
        {
            if(ans[i])
            {
                memset(prr, 0, sizeof prr);
                f1(j,0,n)
                {
                    prr[a[j] ^ i] = 1;
                }
                int no = 0;
                f1(j,0,1025)
                {
                    if(arr[j] != prr[j])
                    {
                        no = 1;
                        break;
                    }
                }
                if(no == 0)
                {
                    final.pb(i);
                }
            }
        }
        sort(final.begin(), final.end());
        if(final.size() == 0)
        {
            cout<<-1<<endl;
        }
        else
        cout<<final[0]<<endl;
    }
    return 0;
}