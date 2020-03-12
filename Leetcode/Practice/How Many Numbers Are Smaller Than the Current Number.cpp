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
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
    	int hash[101];
    	memset(hash,0,sizeof(hash));
    	int n = nums.size();
        f1(i,0,n)
        {
        	hash[nums[i]]++;
        }
        f1(i,0,n)
        {
        	temp = 0;
        	f1(j,0,nums[i])
        	{
        		temp+=hash[j];
        	}
        	nums[i] = temp;
        }
        return nums;
    }
};