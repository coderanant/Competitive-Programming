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
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        f1(i,0,n)
        {
            int count=0;
            while(nums[i])
            {
                nums[i]/=10;
                count++;
            }
            if(count%2==0)
                ans++;
        }
        return ans;
    }
};