#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool mp[124];
        memset(mp,false,sizeof(mp));
        f1(i,0,J.size())
            mp[J[i]]=true;
        
        int ans=0;
        
        f1(i,0,S.size())
        {
            if(mp[S[i]]==true)
                ans++;
        }
        return ans;
    }
};