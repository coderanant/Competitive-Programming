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
int n, m;
void nxt(int &x, int &y, int &flag)
{
    if(y == m && flag == 0)
    {
        x++;
        flag ^= 1;
    }
    else if(y == 1 && flag == 1)
    {
        x++;
        flag ^= 1;
    }
    else
    {
        if(flag)
        y--;
        else
        y++;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>n>>m>>k;
    int x = 1, y = 1;
    int flag = 0;
    temp = 0;
    while(k > 1)
    {
        cout<<2<<gp;
        temp += 2;
        f1(i,0,2)
        {
            cout<<x<<gp<<y<<gp;
            nxt(x, y, flag);
        }
        cout<<endl;
        k--;
    }
    cout<<n*m-temp<<gp;
    while(1)
    {
        if(x > n || y > m)
        break;
        cout<<x<<gp<<y<<gp;
        nxt(x, y, flag);
    }
    return 0;
}