class Solution {
public:
    string defangIPaddr(string address) {
        #define ll long long
        #define f1(i,a,b) for(int i=a;i<b;i++)
        #define f2(i,a,b) for(int i=a;i>=b;i--)
        #define endl '\n'
        #define pb push_back
        #define gp " "
        #define ff first
        #define ss second
        #define mp make_pair
        
        int n=address.size();
        string ans;
        f1(i,0,n)
        {
            if(address[i]=='.')
                ans+="[.]";
            else
                ans.pb(address[i]);
        }
        return ans;
    }
};