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
int arr[300000+1][26];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    memset(arr[0], 0, sizeof(arr[0]) );
    f1(i,1,n+1)
    {
        f1(j,0,26)
        arr[i][j] = arr[i-1][j];
        arr[i][s[i-1] - 'a']++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        f2(i,25,0)
        {
            if(arr[r + 1][i] - arr[l][i] > 0)
            {
                cout<<arr[r+1][i] - arr[l][i]<<endl;
                break;
            }
        }
    }
    return 0;
}