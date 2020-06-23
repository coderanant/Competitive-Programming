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
        int n;
        cin>>n;
        if(n == 1)
        cout<<"FastestFinger"<<endl;
        else if(n%2 == 1)
            cout<<"Ashishgup"<<endl;
        else
        {
            int even = 0, odd = 0;
            int temp = n;
            while(1)
            {
                if(n % 2 != 0)
                break;
                even++;
                n/=2;
            }
            if(n > 1)
            {
                for(int i = 2; i*i <= n; i++)
                {
                    if(n % i == 0)
                    {
                        odd = 2;
                        break;
                    }
                }
                if(odd == 0)
                odd = 1;
            }
            if(even == 1)
            {
                if(odd == 1)
                cout<<"FastestFinger"<<endl;
                else
                {
                    cout<<"Ashishgup"<<endl;
                }
            }
            else
            {
                if(odd == 0)
                {
                    cout<<"FastestFinger"<<endl;
                }
                else
                {
                    cout<<"Ashishgup"<<endl;
                }
                
            }
        }
    }
    return 0;
}