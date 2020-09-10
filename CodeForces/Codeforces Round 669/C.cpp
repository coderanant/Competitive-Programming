/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
// #define endl '\n'
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
    int n;
    cin>>n;
    queue<int> q;
    f1(i, 1, n + 1)
    q.push(i);

    int arr[n + 1];
    memset(arr, -1, sizeof arr);
    while(q.size() > 1)
    {
        int num1 = q.front(); q.pop();
        int num2 = q.front(); q.pop();
        cout<<"? "<<num1<<gp<<num2<<endl;
        int ans1, ans2;
        cin>>ans1;
        if(ans1 == -1)
        return 0;
        cout<<"? "<<num2<<gp<<num1<<endl;
        cin>>ans2;
        if(ans2 == -1)
        return 0;
        if(ans1 > ans2)
        {
            arr[num1] = ans1;
            q.push(num2);
        }
        else
        {
            arr[num2] = ans2;
            q.push(num1);
        }
    }
    cout<<"! ";
    f1(i, 1, n + 1)
    {
        if(arr[i] == -1) arr[i] = n;
        cout<<arr[i]<<gp;
    }
    cout<<endl;
    return 0;
}