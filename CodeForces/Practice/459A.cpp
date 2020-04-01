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
    
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    int x3,y3,x4,y4;
    if( x1 == x2 && y1 != y2)
    {
        int dist = abs(y2-y1);
        x3 = x2 + dist;
        x4 = x1 + dist;
        y3 = y2;
        y4 = y1;
    }
    else if( y1 == y2 && x1 != x2)
    {
        int dist = abs(x2-x1);
        y3 = y2 + dist;
        y4 = y1 + dist;
        x3 = x2;
        x4 = x1;
    }
    else if(x1 == x2 && y1 == y2)
    {
        cout<<-1<<endl;
        return 0;
    }
    else 
    {
        if(abs (x1-x2) != abs(y1-y2))
        {
            cout<<-1<<endl;
            return 0;
        }
        else
        {
            int dist = abs(x2-x1);
            if(x1 > x2)
            {
                swap(x1,x2);
                swap(y1,y2);
            }
            x3 = x2;
            y3 = y1;
            x4 = x1;
            y4 = y2;
        }
    }
    cout<<x3<<gp<<y3<<gp<<x4<<gp<<y4<<endl;
    return 0;
}