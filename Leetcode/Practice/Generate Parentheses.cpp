class Solution {
public:
    vector<string> ans;
    int num;
    void generate(string temp, int start, int end)
    {
        if(temp.size() == num * 2)
        {
            ans.push_back(temp);
            return;
        }
        if(start > 0)
            generate(temp + '(', start - 1, end + 1);
        if(end > 0)
            generate(temp + ')', start, end - 1);
        return ;
    }
    vector<string> generateParenthesis(int n) {
        num = n;
        generate("", n, 0);
        return ans;
    }
};