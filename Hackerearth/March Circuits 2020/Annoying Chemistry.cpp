/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define f1(i,a,b) for(int i = a; i< b; i++)
signed main()
{
    int x,y,p,q;
    cin>>x>>y>>p>>q;
    int b2 = x * q;
    int b1 = p * y;
    int b3 = x * y;
    int maxi = max({b1, b2, b3});
    for(int i = 2; i*i <= maxi; i++)
    {
        int temp;
        temp = b1 / i;
        if (( b1 % temp == 0 && b2 % temp == 0) && b3 % temp == 0)
        { 
            b1 /= temp;
            b2 /= temp;
            b3 /= temp;
            i--;
        }
        if (( b1 % i == 0 && b2 % i == 0) && b3 % i == 0)
        { 
            b1 /= i;
            b2 /= i;
            b3 /= i;
            i--;
        }
    }
    cout<<b1<<" "<<b2<<" "<<b3;
    return 0;
}