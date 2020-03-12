/*coderanant*/
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
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
    	vector<int> ans;
		f1(i,left,right+1)
		{
			temp = i;
			int flag = 1;
			while(temp)
			{
				int rem = temp%10;
				temp/=10;
				if(rem==0||i%rem!=0)
				{
					flag=0;
					break;
				}
			}
			if(flag)
				ans.pb(i);
		}
		return ans;
    }
};