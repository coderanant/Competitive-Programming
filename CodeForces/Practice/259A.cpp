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
    
    int yes = 1;
    f1(i,0,8)
    {
        string s;
        cin>>s;
        f1(j,0,8)
        {
            if(s[j] == s[(j+1)%8])
            yes = 0;
        }
    }
    if(yes)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}