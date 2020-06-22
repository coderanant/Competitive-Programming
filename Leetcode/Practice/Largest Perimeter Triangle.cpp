class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        int ans = 0;
        sort(A.begin(), A.end());
        for(int i = 0; i < A.size() - 2; i++)
        {
            if(A[i] + A[i + 1] > A[i + 2])
                ans = max(ans, A[i] + A[i + 1] + A[i + 2]);
        }
        return ans;
    }
};