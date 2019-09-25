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

    int d;
    cin>>d;
    int oc,of,od;
    cin>>oc>>of>>od;
    int cs,cb,cm,cd;
    cin>>cs>>cb>>cm>>cd;
    int onlfare=0;
    onlfare = oc + (max(0ll,d-of))*od;
    int offare=cb;
    offare+=((d*cm)/cs);
    offare+=(d*cd);
    //cout<<offare<<endl;
    if(onlfare<=offare)
    	cout<<"Online Taxi";
    else
    	cout<<"Classic Taxi";
    return 0;
}