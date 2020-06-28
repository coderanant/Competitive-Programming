class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> st;
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == ')' and !st.empty() and st.top() == '(')
                st.pop();
            else
                st.push(S[i]);
        }
        return st.size();
    }
};