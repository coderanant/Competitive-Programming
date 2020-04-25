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
#define ppp pair<int,pair<int,int>>
const int mod=1000000007;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ppp> a(n);
    int sum = 0;
    f1(i,0,n)
    {
        cin>>a[i].ss.ff>>a[i].ss.ss;
        a[i].ff = abs(a[i].ss.ff)+abs(a[i].ss.ss);
        if(abs(a[i].ss.ff))
        sum+=2;
        if(abs(a[i].ss.ss))
        sum+=2;
        sum+=2;
    }

    sort(a.begin(), a.end());
    cout<<sum<<endl;
    f1(i,0,n)
    {
        if( abs(a[i].ss.ff) )
        {
            cout<<1<<gp<<abs(a[i].ss.ff)<<gp;
            if(a[i].ss.ff < 0) 
            cout<<'L'<<endl;
            else
            cout<<'R'<<endl;
        }
        if( abs(a[i].ss.ss) )
        {
            cout<<1<<gp<<abs(a[i].ss.ss)<<gp;
            if(a[i].ss.ss < 0) 
            cout<<'D'<<endl;
            else
            cout<<'U'<<endl;
        }
        cout<<2<<endl;
        if( abs(a[i].ss.ff) )
        {
            cout<<1<<gp<<abs(a[i].ss.ff)<<gp;
            if(a[i].ss.ff < 0) 
            cout<<'R'<<endl;
            else
            cout<<'L'<<endl;
        }
        if( abs(a[i].ss.ss) )
        {
            cout<<1<<gp<<abs(a[i].ss.ss)<<gp;
            if(a[i].ss.ss < 0) 
            cout<<'U'<<endl;
            else
            cout<<'D'<<endl;
        }
        cout<<3<<endl;
    }
    return 0;
}