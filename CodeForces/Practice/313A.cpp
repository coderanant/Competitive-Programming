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
    
    string s;
    cin>>s;
    
    if(s[0] != '-')
    {
        cout<<s<<endl;
        return 0;
    }
    
    if(s.size() == 3 && s[2] == '0')
    {
        cout<<'0'<<endl;
        return 0;
    }
    f1(i,0,s.size()-2)
    cout<<s[i];
    int i = s.size();
    if(s[i-1] > s[i-2])
    cout<<s[i-2]<<endl;
    else
    cout<<s[i-1]<<endl;

    return 0;   
}