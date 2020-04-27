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
    int v;
    cin>>v;
    int a[10];
    f1(i,1,10)
    cin>>a[i];

    int num = 1, max = v/a[0];
    f1(i,1,10)
    {
        if(v/a[i] >= max && a[i] <= a[num])
        {
            max = v/a[i];
            num = i;
        }
    }
    v %= a[num];
    int ans[max];
    f1(i,0,max)
    ans[i] = num;

    f1(i,0,max)
    {
        int flag = 0;
        f2(j,9,num+1)
        {
            if((a[j] - a[num]) <= v)
            {
                ans[i] = j;
                v -= a[j] - a[num];
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        break;
    }
    f1(i,0,max)
    cout<<ans[i];
    if(max == 0)
    cout<<-1<<endl;
    return 0;
}