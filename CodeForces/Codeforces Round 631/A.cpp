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
        int n,x;
        cin>>n>>x;
        int a[500];
        memset(a,0,sizeof(a));
        f1(i,0,n)
        {
            cin>>temp;
            a[temp] =1;
        }

        int ans = 0;

        f1(i,1,500)
        {
            if(a[i] == 0 && x>0)
            x--;

            else if(a[i] == 0)
            {
                cout<<i-1<<endl;
                break;
            }
        }
    }
    return 0;
}