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
        int arr[n];
        f1(i,0,n)
        cin>>arr[i];
        int a = 0, b = 0;
        int at = 0, bt = 0;
        int i = 0, j = n-1;
        int flag = 0;
        int moves = 0;
        while(1)
        {
            // cout<<i<<gp<<j<<endl;
            if(i > j)
            break;
            if(flag == 0)
            {
                moves++;
                a = 0;
                int k;
                for(k = i ; k <= j; k++)
                {
                    a+=arr[k];
                    at+=arr[k];
                    if(a > b)
                    break;
                }
                i = k + 1;
                flag = 1;
                continue;
            }
            if(flag == 1)
            {
                moves++;
                b = 0;
                int k;
                for(k = j; k >= i; k--)
                {
                    b+=arr[k];
                    bt += arr[k];
                    if(b > a)
                    break;
                }
                j = k - 1;
                flag = 0;
                continue;
            }
        }
        cout<<moves<<gp<<at<<gp<<bt<<endl;
    }
    return 0;
}