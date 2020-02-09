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
    int balancedStringSplit(string s) {
        
        int count=0,ans=0;
        f1(i,0,s.size())
        {
            if(s[i]=='R')
                count++;
            else
                count--;
            if(count==0)
                ans++;
        }
        return ans;
    }
};