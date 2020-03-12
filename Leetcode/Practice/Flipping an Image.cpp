/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
    	int n=A.size();
    	int m=A[0].size();
        f1(i,0,n)
        {
        	f1(j,0,(m+1)/2)
        	{
        		swap(A[i][j],A[i][(m-1)-j]);

        		if(A[i][j]==0)
        			A[i][j]=1;
        		else
        			A[i][j]=0;
                
        		if((A[i][(m-1)-j]==0)&&(j!=((m-1)-j)))
        			A[i][(m-1)-j]=1;
        		else if(j!=((m-1)-j))
        			A[i][(m-1)-j]=0;

        	}
        }
        return A;
    }
};