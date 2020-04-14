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
        vector<string> vc;
        f1(i,0,9)
        {
            string temp;
            cin>>temp;
            vc.pb(temp);
        }
        int arr[10][10];
        f1(i,1,10)
        {
            f1(j,1,10)
            {
                arr[i][j] = (vc[i-1][j-1]) - '0';
            }
        }
        arr[1][9] = (arr[1][9]+1);
        arr[2][6] = (arr[2][6]+1);
        arr[3][3] = (arr[3][3]+1);

        arr[4][8] = (arr[4][8]+1);
        arr[5][5] = (arr[5][5]+1);
        arr[6][2] = (arr[6][2]+1);

        arr[7][7] = (arr[7][7]+1);
        arr[8][4] = (arr[8][4]+1);
        arr[9][1] = (arr[9][1]+1);
     
        f1(i,1,10)
        {
            f1(j,1,10)
            {
                if(arr[i][j] == 10)
                arr[i][j] = 1;
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}