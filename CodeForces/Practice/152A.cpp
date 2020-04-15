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
    int n, m;
    cin>>n>>m;
    char arr[m];
    f1(i,0,m)
    arr[i] = '0';
    vector<string> temp(n);
    f1(i,0,n)
    {
        cin>>temp[i];
        f1(j,0,m)
        arr[j] = max(arr[j], temp[i][j]);
    }

    int ans = 0;

    f1(i,0,n)
    {
        f1(j,0,m)
        {
            if(temp[i][j] == arr[j])
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}