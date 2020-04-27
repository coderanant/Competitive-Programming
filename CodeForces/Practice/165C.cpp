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
    int k;
    cin>>k;
    string s;
    cin>>s;
    int n = s.size();

    vector<int> suff(n,0ll);
    if(s[0] == '1')
    suff[0] = 1;
    f1(i,1,n)
    {
        suff[i] = suff[i-1];
        if(s[i] == '1')
        suff[i]++;
    }
    // suff[n] = suff[n-1];
    int ans = 0;
    f1(i,0,n)
    {
        int indl = lower_bound(suff.begin(), suff.end(), s[i]=='1'?suff[i]+k-1:suff[i]+k) - suff.begin();
        int indr = upper_bound(suff.begin(), suff.end(), s[i]=='1'?suff[i]+k-1:suff[i]+k) - suff.begin();
        ans += (indr - max(indl, i));
    }
    cout<<ans<<endl;
    return 0;
}