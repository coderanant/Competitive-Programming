/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    f1(i,0,n)
    cin>>arr[i];
    int m;
    cin>>m;
    vector<int> brr(m);
    f1(i,0,m)
    cin>>brr[i];

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    int ans = -1, a = -1, b = -1;
    b = upper_bound(brr.begin(), brr.end(), arr[0]-1) - brr.begin();
    b = 2 * b + 3 * (m - b);
    ans = 3 * n - b;
    a = 3 * n;
    f1(i,0,n)
    {
        int calc = upper_bound(brr.begin(), brr.end(), arr[i]) - brr.begin();
        calc = 2 * calc + 3 * (m - calc);
        temp = upper_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();
        temp = 2 * temp + 3 * (n - temp);

        if(temp - calc > ans || (temp - calc == ans && temp > a))
        {
            ans = temp - calc;
            a = temp;
            b = calc;
        }
    } 
    int calc = upper_bound(brr.begin(), brr.end(), brr[0]-1) - brr.begin();
    calc = 2 * calc + 3 * (m - calc);
    temp = upper_bound(arr.begin(), arr.end(), brr[0] - 1) - arr.begin();
    temp = 2 * temp + 3 * (n - temp);

    if(temp - calc > ans || (temp - calc == ans && temp > a))
    {
        ans = temp - calc;
        a = temp;
        b = calc;
    }
    f1(i,0,m)
    {
        calc = upper_bound(brr.begin(), brr.end(), brr[i]) - brr.begin();
        calc = 2 * calc + 3 * (m - calc);
        temp = upper_bound(arr.begin(), arr.end(), brr[i]) - arr.begin();
        temp = 2 * temp + 3 * (n - temp);

        if(temp - calc > ans || (temp - calc == ans && temp > a))
        {
            ans = temp - calc;
            a = temp;
            b = calc;
        }
    } 
    cout<<a<<":"<<b<<endl;
    return 0;
}