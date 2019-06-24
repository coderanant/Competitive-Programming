/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(i=a;i<b;i++)
#define f2(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
int i,j;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
        freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    int n,m;
    cin>>n>>m;
    int a[n];
    f1(i,0,n)
    {
        cin>>a[i];
    }
    int sum=0;
    vector<int> b(101,0);
    f1(i,0,n)
    {
        if(a[i]>(m-sum))
        {
            int count=0,diff=a[i]-(m-sum);
            f2(j,100,1)
            {
                if(b[j]>0)
                {
                    temp=ceil((long double)diff/j);
                    if(b[j]>=temp)
                    {
                        count+=temp;
                        break;
                    }
                    else
                    {
                        diff-=(b[j]*j);
                        count+=b[j];
                    }
                }
            }
            cout<<count<<gp;
        }
        else
            cout<<0<<gp;
        sum+=a[i];
        b[a[i]]++;
    }
    return 0;
}