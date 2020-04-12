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
    
    int n, k;
    cin>>n>>k;
    int arr[n];

    f1(i,0,n)
    cin>>arr[i];

    int curr = 0, sum = 0;
    int a = n-k, b = n-2*k, ansa = n-k;
    f2(i,n-1,n-k)
    {
        curr += arr[i];
        sum += arr[i - k];
    }
    int temp1 = curr, temp2 = sum;
    sum = temp1 + temp2;
    f2(i, (n-1)-k, k)
    {
        // cout<<1234<<gp<<i<<endl;
        temp1 += arr[i];
        temp1 -= arr[i+k];
        if(temp1 >= curr)
        {
            curr = temp1;
            a = i;
        }
        temp2 += arr[i-k];
        temp2 -= arr[i];
        if( (temp2 + curr ) >= sum )
        {
            sum = temp2 + curr;
            b = i - k;
            ansa = a;
        }
        // cout<<b<<gp<<a<<endl;
    }
    cout<<b+1<<gp<<ansa+1<<endl;
    return 0;
}