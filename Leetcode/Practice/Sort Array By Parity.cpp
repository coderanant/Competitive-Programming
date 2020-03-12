/*coderanant*/
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
ll temp;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int> ans;
        int n = A.size();
        f1(i,0,n)
        {
        	if(A[i]%2==0)
        		ans.pb(A[i]);
        }
        f1(i,0,n)
        {
        	if(A[i] % 2 == 1)
        		ans.pb(A[i]);
        }
        return ans;
    }
};