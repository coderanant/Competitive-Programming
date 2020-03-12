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
    bool judgeCircle(string moves) 
    {
        int n = moves.size();
        int x = 0, y = 0;
        f1(i,0,n)
        {
        	if(moves[i] == 'R')
        		x++;
        	else if(moves[i] == 'L')
        		x--;
        	else if(moves[i] == 'U')
        		y++;
        	else 
        		y--;
        }
        if(x == 0 && y == 0)
        	return true;
        return false;
    }
};