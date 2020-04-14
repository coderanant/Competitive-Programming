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
        int a[n];
        f1(i,0,n)
        cin>>a[i];

        int arr[n+1];
        memset(arr, 0, sizeof(arr));

        set<int> seti;
        f1(i,0,n)
        {
            // seti.insert(a[i]);
            arr[a[i]]++;
        }

        int maxi = 0, ind = -1;
        f1(i,0, n+1)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
                ind = i;
            }
        }

        f1(i,0,n)
        {
            if(a[i]!=ind)
            {
                seti.insert(a[i]);
            }
        }
        int diff = seti.size();

        if(maxi-1 >= diff+1)
        {
            cout<<diff+1<<endl;
        }
        else cout<<min(diff, maxi)<<endl;
    }
    return 0;
}