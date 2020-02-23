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
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        f1(i,1,points.size())
        {
        	int xdif = abs(points[i][0]-points[i-1][0]);
        	int ydif = abs(points[i][1]-points[i-1][1]);
        	ans+=(min(xdif,ydif)+abs(xdif-ydif));
        }
        return ans;
    }
};