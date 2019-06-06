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
    while(1)
    {
    	string s1,s2;
    	int t1,t2;
    	cin>>s1>>t1>>s2>>t2;
    	//cout<<s1<<t1<<s2<<t2<<endl;
    	if(s1[0]!='C'&&s1[0]!='D'&&s1[0]!='B')
    	{
    		break;
    	}
    	int b1=0,c1=0,d1=0,b2=0,c2=0,d2=0;
    	if(s1[0]=='C')
    		c1=t1;
    	else if(s1[0]=='D')
    		d1=t1;
    	else if(s1[0]=='B')
    		b1=t1;
    	if(s2[0]=='C')
    		c2=t2;
    	else if(s2[0]=='D')
    		d2=t2;
    	else if(s2[0]=='B')
    		b2=t2;
    	if(b1&&b2)
    	{
    		if(b1>b2)
    			cout<<"Tobby\n";
    		else if(b2>b1)
    			cout<<"Naebbirac\n";
    		else
    			cout<<"Draw\n";
    		continue;
    	}if(c1&&c2)
    	{
    		if(c1>c2)
    			cout<<"Tobby\n";
    		else if(c2>c1)
    			cout<<"Naebbirac\n";
    		else
    			cout<<"Draw\n";
    		continue;
    	}if(d1&&d2)
    	{
    		if(d1>d2)
    			cout<<"Tobby\n";
    		else if(d2>d1)
    			cout<<"Naebbirac\n";
    		else
    			cout<<"Draw\n";
    		continue;
    	}
    	if(b1&&d2)
    	{
    		if(d2<2*b1)
    			cout<<"Tobby\n";
    		else
    			cout<<"Naebbirac\n";
    		continue;
    	}
    	if(b1&&c2)
    	{
    		if(b1>=2*c2)
    			cout<<"Tobby\n";
    		else
    			cout<<"Naebbirac\n";
    		continue;
    	}
    	if(d1&&b2)
    	{
    		if(d1>=2*b2)
    			cout<<"Tobby\n";
    		else
    			cout<<"Naebbirac\n";
    		continue;
    	}
    	if(d1&&c2)
    	{
    		if(c2>=2*d1)
    			cout<<"Naebbirac\n";
    		else
    			cout<<"Tobby\n";
    		continue;
    	}
    	if(c1&&b2)
    	{
    		if(b2>=2*c1)
    			cout<<"Naebbirac\n";
    		else
    			cout<<"Tobby\n";
    		continue;
    	}
    	if(c1&&d2)
    	{
    		if(c1>=2*d2)
    			cout<<"Tobby\n";
    		else
    			cout<<"Naebbirac\n";
    		continue;
    	}
    }
    return 0;
}