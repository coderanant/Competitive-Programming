class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0, ptr = 0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        for(int i = 0; i < arr1.size(); i++)
        {
            for(int j = ptr; j < arr2.size() - 1; j++)
            {
                if(abs(arr1[i] - arr2[j + 1]) <= abs(arr1[i] - arr2[j]))
                {
                    ptr++;
                }
                else break;
            }
            if(abs(arr2[ptr] - arr1[i]) > d)
                ans++;
        }
        return ans;
    }
};