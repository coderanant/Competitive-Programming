class Solution {
public:
    int numberOfSteps (int num) {
        #define ll long long
        #define f1(i,a,b) for(int i=a;i<b;i++)
        #define f2(i,a,b) for(int i=a;i>=b;i--)
        #define endl '\n'
        #define pb push_back
        #define gp " "
        #define ff first
        #define ss second
        #define mp make_pair
        int ans=0;
        while(num)
        {
            if(num%2)
                num--;
            else
                num/=2;
            ans++;
        }
        return ans;
    }
};