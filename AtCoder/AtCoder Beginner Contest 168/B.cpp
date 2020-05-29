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
    int k;
    string s;
    cin>>k>>s;
    if(s.size() > k)
    {
        f1(i,0,k)
        cout<<s[i];
        cout<<"..."<<endl;
    }
    else
    cout<<s<<endl;
    return 0;
}