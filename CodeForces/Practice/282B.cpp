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
#define ppp pair<pair<int,int>, int>
const int mod=1000000007;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    vector<ppp> a(n+1);
    f1(i,1,n+1)
    {
        cin>>a[i].ff.ff>>a[i].ff.ss;
        a[i].ss = i;
    }

    sort(a.begin(), a.end());
    int sumf = 0, las = 0;

    f1(i,1,n+1)
    las += a[i].ff.ss;

    int ind = -1;
    if(abs(sumf-las) <= 500)
    {
        ind = 0;
    }
    else
    {
        f1(i,1,n+1)
        {
            sumf += a[i].ff.ff;
            las -= a[i].ff.ss;
            if( abs(sumf - las) <= 500)
            {
                ind = i;
                break;
            }
        }
    }

    if(ind == -1)
    cout<<-1<<endl;
    else
    {
        string ans;
        ans.resize(n+1);
        f1(i,1,ind+1)
        {
            ans[a[i].ss] = 'A';
        }
        f1(i,1,n+1)
        {
            if(ans[i]!='A')
            cout<<'G';
            else
            cout<<'A';
        }
    }
    
    return 0;
}