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
    int n, k;
    cin>>n>>k;

    set<int> s;
    int r = mod;
    int a[n];
    f1(i,0,n)
    {
        cin>>a[i];
        s.insert(a[i]);

        if(s.size() == k)
        {
            r = i;
            break;
        }
    }
    s.clear();
    if(r == mod)
    {
        cout<<-1<<gp<<-1<<endl;
        return 0;
    }
    int l = -1;
    f2(i,r,0)
    {
        s.insert(a[i]);
        if(s.size() == k)
        {
            l = i;
            break;
        }
    }
    cout<<l+1<<gp<<r+1<<endl;
    return 0;
}