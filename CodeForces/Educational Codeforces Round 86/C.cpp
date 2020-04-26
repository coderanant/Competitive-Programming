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
        int a, b, q;
        cin>>a>>b>>q;
        int lcm = a * b / __gcd(a, b);
        int arr[2*lcm+1];
        f1(i,1,2*lcm+1)
        {
            if( ((i%a)%b) != (i%b)%a )
            arr[i] = 1;
            else
            arr[i] = 0;
        }
        arr[0] = 0;
        int num = 0;
        f1(i,0,lcm)
        if(arr[i]) num++;
        while(q--)
        {
            int l, r;
            cin>>l>>r;
            int ans = 0;
            int l1 = l % lcm;
            int r1 = r % lcm;
            if(r1 < l1)
            r1 += lcm;
            f1(i,l1,r1+1)
            {
                if(arr[i] == 1)
                ans++;
            }
            ans+= num * ((r - l) / lcm);
            cout<<ans<<gp;
        }
        cout<<endl;
    }
    return 0;
}