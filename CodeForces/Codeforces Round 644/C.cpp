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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int odd = 0, even = 0;
        f1(i,0,n)
        {
            cin>>a[i];
            if(a[i] % 2 == 0)
            even++;
            else
            odd++;
        }
        sort(a, a + n);
        if(odd % 2 == 0)
        cout<<"YES"<<endl;
        else
        {
            int flag = 0;
            f1(i,1,n)
            {
                if(a[i] - a[i - 1] == 1)
                {
                    cout<<"YES"<<endl;
                    flag = 1;
                    break;
                }
            }
            if(!flag)
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}