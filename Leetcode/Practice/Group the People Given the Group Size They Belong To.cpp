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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> a(n+1);
        
        f1(i,0,n)
        {
            a[groupSizes[i]].pb(i);
        }
        vector<vector<int>> ans;
        f1(i,1,n+1)
        {
            if(a[i].size()!=0)
            {
                vector<int> temp;
                f1(j,0,a[i].size())
                {
                    temp.pb(a[i][j]);
                    if(temp.size()%i==0)
                    {
                        ans.pb(temp);
                        temp.clear();
                    }
                }
            }
        }
        return ans;
    }
};