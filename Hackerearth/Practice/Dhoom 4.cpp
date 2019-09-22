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
    
    int key,final;
    cin>>key>>final;
    int n;
    cin>>n;

    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int arr[100001];
    memset(arr,-1,sizeof(arr));
    arr[key]=0;
    queue<int> q;
    q.push(key);
    while(!q.empty())
    {
    	int cur=q.front(); q.pop();
    	if(cur==final)
    	{
    		cout<<arr[final];
    		return 0;
    	}

    	f1(i,0,n)
    	{
    		temp=(cur*a[i])%100000;
    		if(arr[temp]==-1)
    		{
    			q.push(temp);
    			arr[temp]=arr[cur]+1;
    		}
    	}
    }
    cout<<-1;

    return 0;
}