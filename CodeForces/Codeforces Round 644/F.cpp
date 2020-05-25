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
        int n, m;
        cin>>n>>m;
        string arr[n];
        f1(i,0,n)
        cin>>arr[i];
        string a;
        a = arr[0];
        int fyes = 0;
        f1(i,0,m)
        {
            a = arr[0];
            f1(j,0,26)
            {
                a[i] = char('a' + j);
                // cout<<a<<endl;
                int yes = 1;
                f1(j,0,n)
                {
                    temp = 0;
                    f1(k,0,m)
                    {
                        if(arr[j][k] != a[k])
                        temp++;
                    }
                    if(temp > 1)
                    {
                        yes = 0;
                        break;
                    }
                }
                if(yes == 1)
                {
                    cout<<a<<endl;
                    fyes = 1;
                    break;
                }
            }
            if(fyes == 1)
            break;
        }
        if(fyes == 0)
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}