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
    string freqAlphabets(string s) {
        int n=s.size();

        string ans;
        int temp;
        f2(i,n-1,0)
        {
        	if(s[i]=='#')
        	{
        		temp = (s[i-2]-'0')*10+(s[i-1]-'0');
        		ans.pb(char('a'-1+temp));
        		i-=2;
        	}
        	else
        	{
        		ans.pb(char('a'-1+s[i]-'0'));
        	}
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};