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
        int n;
        cin>>n;
        f1(i,2,33)
        {
            temp = 2;
            f1(j,1,i)
            {
                temp*=2;
            }
            temp-=1;
            int x = n/temp;
            if(x * temp == n)
            {
                cout<<x<<endl;
                break;
            }
        }
    }
    return 0;
}