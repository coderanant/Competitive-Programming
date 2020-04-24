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

int dist(char a, char b)
{
    if(a > b)
    swap(a,b);
    return min( b - a, 'z' - b + a - 'a' + 1);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p;
    cin>>n>>p;
    string s;
    cin>>s;
    p--;
    int n2 = n/2;
    if(p<n2)
    {
        int sum = 0, low = mod, high = -1;
        f1(i,0,n2)
        {
            if(s[i] != s[(n-1) - i])
            {
                low = min(low, i);
                high = max(high, i);
                sum += dist(s[i], s[(n-1) - i]);
            }
        }
        if(low == mod)
        {
            cout<<0<<endl;
            return 0;
        }
        if(p <= low)
        sum+=high - p;
        else if(p>=high)
        sum+=p - low;
        else
        {
            sum += min( high - p + high - low, p - low + high - low);
        }
        cout<<sum<<endl;
    }
    else
    {
        int sum = 0, low = mod, high = -1;
        f1(i,n2,n)
        {
            if(s[i] != s[(n-1) - i])
            {
                low = min(low, i);
                high = max(high, i);
                sum += dist(s[i], s[(n-1) - i]);
            }
        }
        if(low == mod)
        {
            cout<<0<<endl;
            return 0;
        }
        if(p <= low)
        sum+=high - p;
        else if(p>=high)
        sum+=p - low;
        else
        {
            sum += min( high - p + high - low, p - low + high - low);
        }
        cout<<sum<<endl;
    }
    return 0;
}