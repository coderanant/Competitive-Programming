#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair
class Solution {
public:
    string removeOuterParentheses(string S) {
        int temp=0;
        string ans;
        f1(i,0,S.size())
        {
        	if(S[i]=='(')
        		temp++;
        	else
        		temp--;
            if(temp==1&&S[i]==')')
                ans.pb(S[i]);
        	if(temp!=0&&temp!=1)
        	{
        		ans.pb(S[i]);
        	}
        }
        return ans;
    }
};