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
    map<int, string> mp;
    int count = 0;
    string int_to_string(int n)
    {
        string ans;
        while(n)
        {
            int rem = n % 10;
            ans.pb(char(rem+'0'));
            n/=10;
        }
        return ans;
    }
    int string_to_int(string s)
    {
        int ans = 0;
        f1(i,0,s.size())
        {
            ans*=10;
            ans+=int(s[i]-'0');
        }
        return ans;
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        mp[count] = longUrl;
        count++;
        return int_to_string(count-1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[string_to_int(shortUrl)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));