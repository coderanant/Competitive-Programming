/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n == 1) {
        cout<<1;
        return 0;
    }
    if(n < 4) {
        cout<<"NO SOLUTION";
        return 0;
    }
    int temp = n - 1;
    while(temp > 0) {
        cout<<temp<<' ';
        temp -= 2;
    }
    temp = n;
    while(temp > 0) {
        cout<<temp<<' ';
        temp -= 2;
    }
    return 0;
}