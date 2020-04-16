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
    
    int n;
    cin>>n;

    f1(i,0,n/4 + 1)
    {
        int y = (n - 4 * i) / 7;
        if(4 * i + 7 * y == n)
        {
            f1(j,0,i)
            cout<<4;
            f1(j,0,y)
            cout<<7;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}