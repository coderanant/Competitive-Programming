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
    int a,b,c;
    cin>>a>>b>>c;

    f1(i,1,a+1)
    {
        if(i>=b && c==(a-b))
        {
            cout<<b<<gp<<0<<gp<<c<<endl;
            return 0;
        }
        if(i<b && c==((b-i)+(a-i)))
        {
            cout<<i<<gp<<b-i<<gp<<a-i<<endl;
            return 0;
        }

        if(i>=c && b==(a-c))
        {
            cout<<b<<gp<<0<<gp<<c<<endl;
            return 0;
        }
        if(i<c && b==((c-i)+(a-i)))
        {
            cout<<a-i<<gp<<c-i<<gp<<i<<endl;
            return 0;
        }
    }

    cout<<"Impossible"<<endl;
    return 0;
}