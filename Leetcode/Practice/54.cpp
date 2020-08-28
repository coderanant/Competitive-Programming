class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.size() == 0)
            return ans;
        int n = matrix.size(), m = matrix[0].size();
        int i = 0, j = 0, flag = 0;
        while(ans.size() < n * m)
        {
            ans.push_back(matrix[i][j]);
            matrix[i][j] = INT_MIN;
            if(flag == 0)
            {
                if(j + 1 < m && matrix[i][j + 1] != INT_MIN)
                    j++;
                else
                {
                    flag = 1;
                    i++;
                }
            }
            else if(flag == 1)
            {
                if(i + 1 < n && matrix[i + 1][j] != INT_MIN)
                    i++;
                else
                {
                    flag = 2;
                    j--;
                }
            }
            else if(flag == 2)
            {
                if(j - 1 >= 0 && matrix[i][j - 1] != INT_MIN)
                    j--;
                else
                {
                    flag = 3;
                    i--;
                }
            }
            else
            {
                if(i - 1 >= 0 && matrix[i - 1][j] != INT_MIN)
                    i--;
                else
                {
                    flag = 0;
                    j++;
                }
            }
        }
        cout<<ans.size();
        return ans;
    }
};