class Solution {
public:
    int subtractProductAndSum(int n) {
        #define ll long long
        #define f1(i,a,b) for(int i=a;i<b;i++)
        #define f2(i,a,b) for(int i=a;i>=b;i--)
        #define endl '\n'
        #define pb push_back
        #define gp " "
        #define ff first
        #define ss second
        #define mp make_pair
        
        int prod=1,sum=0;
        while(n)
        {
            int rem = n%10;
            prod*=rem;
            sum+=rem;
            n/=10;
        }
        return prod-sum;
    }
};