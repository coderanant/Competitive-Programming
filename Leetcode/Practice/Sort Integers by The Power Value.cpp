class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> ans;
        for(int i = lo; i <= hi; i++)
        {
            int temp = 0, num = i;
            while(1)
            {
                if(num == 1)
                    break;
                if(num % 2 == 0)
                    num /= 2;
                else
                    num = num * 3 + 1;
                temp++;
            }
            ans.push_back({temp, i});
        }
        sort(ans.begin(), ans.end());
        return ans[k - 1].second;
    }
};