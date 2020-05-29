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
    n %= 10;
    if(n == 2 or n == 4 or n == 5 or n == 7 or n == 9)
    {
        cout<<"hon"<<endl;
    }
    else if(n == 0 or n == 1 or n == 6 or n == 8)
    cout<<"pon"<<endl;
    else
    cout<<"bon"<<endl;
    return 0;
}