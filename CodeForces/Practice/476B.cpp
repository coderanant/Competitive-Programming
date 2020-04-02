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
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    int plus = 0, q = 0;
    f1(i,0,n)
    {
        if(s1[i] == '+')
        plus++;
        if(s2[i] == '+')
        plus--;
        if(s2[i] == '?')
        q++;
    }
    if(plus<0 || q<plus)
    {
        cout<<setprecision(15)<<fixed<<(long double)0<<endl;
        return 0;
    }

    int ans = 0;
    f1(i,0,1<<q)
    {
        int num = 0;
        f1(j,0,11)
        {
            if((1<<j) & (i))
            {
                num++;
            }
        }
        if(num == plus)
            ans++;
    }
    long double fin = ((long double)ans/(1<<q));
    cout<<setprecision(15)<<fixed<<fin<<endl;
    return 0;
}