class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        #define ll long long
        #define f1(i,a,b) for(int i=a;i<b;i++)
        #define f2(i,a,b) for(int i=a;i>=b;i--)
        #define endl '\n'
        #define pb push_back
        #define gp " "
        #define ff first
        #define ss second
        #define mp make_pair
        
        vector<int> ans;
        f1(i,0,nums.size())
        {
            f1(j,0,nums[i])
            {
                ans.pb(nums[i+1]);
            }
            i++;
        }
        return ans;
    }
};