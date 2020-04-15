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
    int n,k;
    cin>>n>>k;

    int arr[n*k+1];
    memset(arr, 0, sizeof(arr));

    f1(i,0,k)
    {
        cin>>temp;
        arr[temp] = i + 1;
    }

    f1(i,0,k)
    {
        int count = 0, flag = 0;
        f1(j,1,n*k+1)
        {
            if(count == n-1 && flag)
            break;
            if(count < n-1 && arr[j] == 0)
            {
                cout<<j<<gp;
                arr[j] = -1;
                count++;
            }
            else if(arr[j] == i+1)
            {
                cout<<j<<gp;
            }
        }
        cout<<endl;
    }

    return 0;
}