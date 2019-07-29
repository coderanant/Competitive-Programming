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
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int a[n];
    int max1=0,max2=0;
    int flag=0;
    f1(i,0,n)
    {
    	cin>>a[i];
    	if(a[i]>max1)
    		max1=a[i];
    }

    f1(i,0,n)
    {
    	if(a[i]==max1)
    		flag++;
    }

    f1(i,0,n)
    {
    	if(a[i]>max2&&a[i]<max1)
    		max2=a[i];
    }
    if(flag>1)
    	max2=max1;
    f1(i,0,n)
    {
    	if(a[i]==max1)
    		cout<<max2<<endl;
    	else
    		cout<<max1<<endl;
    }
    return 0;
}