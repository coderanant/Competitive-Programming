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
        int a;
        cin>>a;

        if(a<60)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int n = 360/(180-a);
        if( ((n-2)*180) / n == a)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}