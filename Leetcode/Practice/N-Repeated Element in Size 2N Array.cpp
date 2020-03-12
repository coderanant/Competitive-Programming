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
    int repeatedNTimes(vector<int>& A) 
    {
        int n = A.size();
        f1(i,0,n)
        {
            f1(j,max(i-3,0),i)
            {
                if(A[i]==A[j])
        		    return A[i];
            }
        }
        return 0;
    }
};