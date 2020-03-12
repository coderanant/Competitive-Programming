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
    int minSteps(string s, string t) 
    {
        int arr[26];
        memset(arr,0,sizeof(arr));
        int n = s.size();
        f1(i,0,n)
        {
        	arr[s[i]-'a']++;
        	arr[t[i]-'a']--;
        }
        int ans = 0;
        f1(i,0,26)
        {
        	if(arr[i]>0)
        		ans+=arr[i];
        }
        return ans;
    }
};