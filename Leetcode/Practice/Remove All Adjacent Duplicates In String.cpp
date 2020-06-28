class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> st;
        for(int i = 0; i < S.size(); i++)
        {
            if(!st.empty() and S[i] == st.top())
                st.pop();
            else
                st.push(S[i]);
        }
        string ans;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};