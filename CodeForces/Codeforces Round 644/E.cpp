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
        string arr[n];
        f1(i,0,n)
        cin>>arr[i];
        int no = 0;
        f1(i,0,n-1)
        {
            f1(j,0,n-1)
            {
                if(arr[i][j] == '1')
                {
                    if(arr[i + 1][j] == '0' && arr[i][j + 1] == '0')
                    {
                        no = 1;
                        break;
                    }
                }
            }
            if(no)
            break;
        }
        if(no)
        cout<<"NO"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    return 0;
}