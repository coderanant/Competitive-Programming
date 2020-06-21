class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int count = 1;
        vector<int> freq;
        for(int i = 1; i< arr.size();i++)
        {
            if(arr[i] != arr[i - 1])
            {
                freq.push_back(count);
                count = 1;
            }
            else
                count++;
        }
        freq.push_back(count);
        sort(freq.begin(), freq.end());
        int ans = freq.size();
        for(int i = 0; i < freq.size(); i++)
        {
            if(k - freq[i] >= 0)
            {
                ans--;
                k -= freq[i];
            }
        }
        return ans;
    }
};