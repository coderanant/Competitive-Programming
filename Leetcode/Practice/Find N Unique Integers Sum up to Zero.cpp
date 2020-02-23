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
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        f1(i,1,n)
        {
        	arr[i-1]=i;
        }
        arr[n-1]=-1*(n*(n-1))/2;
        return arr;
    }
};