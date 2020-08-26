/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i, a, b) for (int i = a; i < b; i++)
#define f2(i, a, b) for (int i = a; i >= b; i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
    int p[n + 1], c[n + 1];
    f1(i, 1, n + 1)
    cin>>p[i];
    f1(i, 1, n + 1)
    cin>>c[i];

    int final_ans = INT_MIN;
    f1(i, 1, n + 1)
    {
        int sum = 0, count = 0;
        int curr = i;
        while(1)
        {
            curr = p[curr];
            sum += c[curr];
            count++;
            if(curr == i)
            break;
        }
        int circle =  k / count;
        circle = max(0ll, circle - 1);
        sum = sum * circle;
        count = k - count * circle;
        curr = p[i];
        int temp = 0, ans = INT_MIN;
        while(count--)
        {
            temp += c[curr];
            ans = max(ans, temp);
            curr = p[curr];
        }
        ans = max(ans, ans + sum);
        final_ans = max(final_ans, ans);
    }
    cout<<final_ans<<endl;
    return 0;
}