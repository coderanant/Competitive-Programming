class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<int> st;
        string ans;
        for(int i = 0; i < s.size(); i++)
        {
            if(ans.size() == 0)
            {
                ans.push_back(s[i]);
                st.push(1);
                continue;
            }
            if(s[i] == ans[ans.size() - 1])
            {
                ans.push_back(s[i]);
                int temp = st.top() + 1;
                st.pop();
                st.push(temp);
            }
            else 
            {
                ans.push_back(s[i]);
                st.push(1);
            }
            
            if(st.top() == k)
            {
                int temp = k;
                while(temp--)
                {
                    ans.pop_back();
                }
                st.pop();
            }
        }
        return ans;
    }
};