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
        if(n < 4)
        {
            cout<<-1<<endl;
            continue;
        }
        temp = n;
        if(n % 2 == 0)
        temp = n-1;
        while(temp > 0)
        {
            cout<<temp<<gp;
            temp -= 2;
        }
        cout<<4<<gp<<2<<gp;
        temp = 6;
        while(temp <= n)
        {
            cout<<temp<<gp;
            temp += 2;
        }
        cout<<endl;
    }
    return 0;
}