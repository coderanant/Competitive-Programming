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
    string s;
    cin>>s;
    s+='/';
    int ans = 0;
    if(k == 2)
    {
        int flag = 0;
        temp = 0;
        f1(i,0,n)
        {
            if(flag == 0 && s[i] != 'A')
            temp++;
            if(flag == 1 && s[i] != 'B')
            temp++;
            flag ^= 1;
        }
        ans = temp;
        temp = 0, flag = 1;
        f1(i,0,n)
        {
            if(flag == 0 && s[i] != 'A')
            temp++;
            if(flag == 1 && s[i] != 'B')
            temp++;
            flag ^= 1;
        }
        if(temp < ans)
        {
            cout<<temp<<endl;
            f1(i,0,n)
            if(i%2 == 0) cout<<'B';
            else cout<<'A';
        }
        else
        {
            cout<<ans<<endl;
            f1(i,0,n)
            if(i%2 == 0) cout<<'A';
            else cout<<'B';
        }
    }
    else
    {
        f1(i,1,n)
        {
            if(s[i]==s[i-1])
            {
                ans++;
                if(s[i-1]!='A' && s[i+1] != 'A')
                    s[i] = 'A';
                else if(s[i-1]!='B' && s[i+1] != 'B')
                    s[i] = 'B';
                else if(s[i-1]!='C' && s[i+1] != 'C')
                    s[i] = 'C';
            }
        }
        s.pop_back();
        cout<<ans<<endl<<s<<endl;
    }
    return 0;
}