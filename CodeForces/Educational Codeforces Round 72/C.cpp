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
    #ifndef ONLINE_JUDGE
        freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
        freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        //cout<<n<<endl;
        int ans=0;
        int zer[n+1];
        memset(zer,0,(n+1)*sizeof(int));
        zer[0]=0;
        int count=0;
        f1(i,1,n+1)
        {
            if(s[i-1]=='0')
                count++;
            else
                count=0;
            zer[i]=count;
        }
        f1(i,0,n)
        {
            int num=0;
            if(s[i]=='0')
                continue;
            f1(j,i,n)
            {
                num*=2;
                if(s[j]=='1')
                    num+=1;
                if(num>=((j-i)+1)&&num<=(j-i)+1+zer[i])
                {
                    ans++;
                }
                if(num>n)
                    break;
                if(j-i+1>20)
                    break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}