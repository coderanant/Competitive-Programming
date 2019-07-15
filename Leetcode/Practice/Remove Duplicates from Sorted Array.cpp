//Method 1 : Smart Method

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto itr = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),itr));
        return nums.size();
    }
};


//Method 2 : To Learn

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int counter = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[counter-1])
            {
                nums[counter]=nums[i];
                counter++;
            }
        }
        return counter;
    }
};