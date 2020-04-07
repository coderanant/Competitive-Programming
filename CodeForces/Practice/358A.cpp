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
    int n;
    cin>>n;
    int x[n];
    f1(i,0,n)
    cin>>x[i];
    int ans = 1;
    f1(i,0,n-1)
    {
        f1(j,0,i-1)
        {
            int a = x[j];
            int b = x[j+1];
            int c = x[i], d = x[i+1];
            if(b<a) swap(a,b);
            if(d<c) swap(c,d);
            if((a<c && b<d) && b > c)
                ans = 0;
            else if((a>c && a<d) && b > d)
                ans = 0;
        }
    }
    if(ans == 1)
    {
        cout<<"no\n";
    }
    else
    cout<<"yes\n";
    return 0;
}