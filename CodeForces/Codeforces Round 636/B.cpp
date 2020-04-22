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
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> even,odd;
        temp = 1;
        f1(i,0,n/2)
        {
            if(temp%2 == 1)
            {
                even.pb(temp+1);
                even.pb(temp+3);
                odd.pb(temp);
                odd.pb(temp+4);
            }
            else
            {
                even.pb(temp);
                even.pb(temp+4);
                odd.pb(temp+1);
                odd.pb(temp+3);
            }
            temp += 5;
        }
        cout<<"YES"<<endl;
        f1(i,0,n/2)
        cout<<even[i]<<gp;
        f1(i,0,n/2)
        cout<<odd[i]<<gp;
        cout<<endl;
    }
    return 0;
} 