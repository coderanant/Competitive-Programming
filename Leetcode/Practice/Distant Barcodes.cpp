class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        sort(barcodes.begin(), barcodes.end());
        vector<pair<int,int>> temp;
        int count = 1, num = barcodes[0];
        for(int i = 1; i < barcodes.size(); i++)
        {
            if(barcodes[i] != barcodes[i - 1])
            {
                temp.push_back({count, num});
                count = 0;
                num = barcodes[i];
            }
            count++;
        }
        temp.push_back({count, num});
        
        sort(temp.begin(), temp.end());
        vector<int> ans(barcodes.size());
        int en = temp.size() - 1;
        for(int i = 0; i < ans.size(); i++)
        {
            ans[i] = temp[en].second;
            if(--temp[en].first == 0)
                en--;
            i++;
        }
        for(int i = 1; i < ans.size(); i++)
        {
            ans[i] = temp[en].second;
            if(--temp[en].first == 0)
                en--;
            i++;
        }
        return ans;
    }
};