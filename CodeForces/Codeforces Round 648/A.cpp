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
        int n, m;
        cin>>n>>m;
        int row = 0, col = 0;
        int arr[n][m];
        f1(i,0,n)
        {
            int flag = 1;
            f1(j,0,m)
            {
                cin>>arr[i][j];
                if(arr[i][j])
                flag = 0;
            }
            if(flag)
            row++;
        }
        f1(i,0,m)
        {
            int flag = 1;
            f1(j,0,n)
            {
                if(arr[j][i])
                flag = 0;
            }
            if(flag)
            col++;
        }
        row = min(row, col);
        if(row % 2)
        cout<<"Ashish"<<endl;
        else
        cout<<"Vivek"<<endl;
    }
    return 0;
}