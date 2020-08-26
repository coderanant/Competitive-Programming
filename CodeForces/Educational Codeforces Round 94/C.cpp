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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s; 
        int x;
        cin>>x;
        int n = s.size();

        string w;
        f1(i, 0, n)
        w += '0';
        for(int i = 0; i < n; i++)
        {
            if((i - x < 0 || s[i - x] == '1') && (i + x >= n || s[i + x] == '1'))
            w[i] = '1';
        }

        int flag = 1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                if((i - x >= 0 && w[i - x] == '1') || (i + x < n && w[i + x] == '1'))
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
        cout<<w<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}