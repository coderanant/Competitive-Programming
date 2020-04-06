/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
// #define pb push_back
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
    string s;
    cin>>s;
    int rb = 0, rs = 0, rc = 0;
    f1(i,0,s.size())
    {
        if(s[i] == 'B')
        rb++;
        else if(s[i] == 'S')
        rs++;
        else
        rc++;
    }

    int nb, ns, nc;
    cin>>nb>>ns>>nc;
    int pb, ps, pc;
    cin>>pb>>ps>>pc;

    int r;
    cin>>r;
    int ans = 0;

    while(1)
    {
        int flag = 0;
        if(rb > 0)
        {
            if(nb == 0)
            flag++;
        }
        else flag++;
        if(rs > 0)
        {
            if(ns == 0)
            flag++;
        }
        else flag++;
        if(rc > 0)
        {
            if(nc == 0)
            flag++;
        }
        else flag++;
        if(flag == 3)
        break;
        if(nb < rb)
        {
            if( r >= (rb - nb)*pb)
            {
                r -= (rb - nb) * pb;
                nb = 0;
            }
            else
            break;
        }
        else nb -= rb;
        if(ns < rs)
        {
            if( r >= (rs - ns)*ps)
            {
                r -= (rs - ns) * ps;
                ns = 0;
            }
            else
            break;
        }
        else ns -= rs;
        if(nc < rc)
        {
            if( r >= (rc - nc)*pc)
            {
                r -= (rc - nc) * pc;
                nc = 0;
            }
            else
            break;
        }
        else nc -= rc;
        ans++;
    }
    // cout<<ans<<endl;

    ans += (r/(rb*pb+rc*pc+rs*ps));
    cout<<ans<<endl;
    return 0;
}