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
    int n,m;
    cin>>n>>m;
    int l[m];
    int maxi = -1, sum = 0;
    f1(i,0,m)
    {
        cin>>l[i];
        sum += l[i];
        if(l[i]>n-i)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    int pro[m+1];
    pro[m] = 0;
    pro[m-1] = l[m-1];
    f2(i,m-2,0)
    {
        pro[i] = pro[i+1]+l[i];
    }
    if(sum<n)
    {
        cout<<-1<<endl;
        return 0;
    }

    vector<int> ans;
    f1(i,0,m)
    {
        int l1 = ((n-i) - l[i] + 1);
        int l2 = pro[i+1]+1;

        cout<<min(l1,l2)<<gp;
    }
    return 0;
}