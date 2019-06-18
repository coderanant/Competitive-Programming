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

vector<pair<int,int>> ans;
void maxneg(set<int> neg, set<int> pos)
{
	if(neg.size()==2&&pos.size()==0)
	{

	}
}

void maxpos(set<int> neg,set<int> pos)
{
	if(pos.size()==2&&neg.size()==0)
	{
		auto itr=(pos.end());
		itr--;
		ans.pb(mp((*itr)-(*pos.begin())));
		return (*itr)-(*pos.begin());

	}
	else if(neg.size()==1&&pos.size()==1)
	{
		ans.pb()
		return (*pos.begin())-(*neg.begin());
	}
	else if(neg.size()==2&&pos.size()==0)
	{
		auto itr=(neg.end());
		itr--;
		return (*neg.begin())-(*itr);
	}
	else
		return 
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
   	int n;
   	multiset<int> neg;
   	multiset<int> pos;
   	int zer=0;
   	f1(i,0,n)
   	{
   		cin>>temp;
   		if(temp<0)
   		{
   			neg.insert(temp);
   		}
   		else if(temp==0)
   		{
   			zer++;
   		}
   		else
   		{
   			pos.insert(temp);
   		}
   	}
   	while(zer)
   	{
   		if(pos.size()<neg.size())
   		{
   			pos.insert(0);
   			zer--;
   		}
   		else if(neg.size()<pos.size())
   		{
   			neg.insert(0);
   			zer--;
   		}
   		else
   			break;
   	}
   	int ans=maxpos(neg,pos);
	return 0;
}