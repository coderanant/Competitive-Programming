class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                string temp;
                while(1)
                {
                    temp += st.top();
                    st.pop();
                    if(temp[temp.size() - 1] == '(')
                        break;
                }
                for(int j = 0; j < temp.size() - 1; j++)
                    st.push(temp[j]);
            }
            else
                st.push(s[i]);
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};