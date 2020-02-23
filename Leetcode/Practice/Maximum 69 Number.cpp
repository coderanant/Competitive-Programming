#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair
class Solution {
public:
    int maximum69Number (int num) {
        int ans=0;
        int flag=0;
        int ans1=0;
        while(num)
        {
        	ans1*=10;
        	ans1+=num%10;
        	num/=10;
        }
        num=ans1;
        while(num)
        {
        	int rem=num%10;
        	num/=10;
        	if(rem==6&&flag==0)
        	{
        		ans*=10;
        		ans+=9;
        		flag=1;
        	}
        	else
        	{
        		ans*=10;
        		ans+=rem;
        	}
        }
        
        return ans;
    }
};