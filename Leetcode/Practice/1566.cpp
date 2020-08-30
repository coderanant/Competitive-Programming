class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int count = 0;
        for(int i = 0; i + m < arr.size(); i++)
        {
            if(arr[i] != arr[i + m])
                count = 0;
            else
                count++;
            if(count == m * (k - 1))
                return true;
        }
        return false;
    }
};