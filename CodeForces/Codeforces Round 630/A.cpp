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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        int flag = 1;
        if(a>b)
        {
            int lef = abs(a-b);
            if( abs(x1-x) < lef)
            {
                flag = 0;
            }
        }
        else if(a==b)
        {
            if(a!=0)
            {
                if( abs(x1-x) < 1 && abs(x2-x) < 1)
                {
                    flag = 0;
                }
            }
        }
        else
        {
            int lef = abs(a-b);
            if( abs(x2-x) < lef)
            {
                flag = 0;
            }
        }

        if(c>d)
        {
            int lef = abs(c-d);
            if( abs(y1-y) < lef)
            {
                flag = 0;
            }
        }
        else if( c==d)
        {
            if(c!=0)
            {
                if( abs(y1-y) < 1 && abs(y2-y) < 1)
                {
                    flag = 0;
                }
            }
        }
        else
        {
            int lef = abs(c-d);
            if( abs(y2-y) < lef)
            {
                flag = 0;
            }
        }
        if(flag )
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}