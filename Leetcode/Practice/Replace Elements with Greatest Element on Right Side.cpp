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
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=-1;
        f2(i,arr.size()-1,0)
        {
            int temp = maxi;
        	maxi=max(arr[i],maxi);
            arr[i]=temp;
        }
        return arr;
    }
};