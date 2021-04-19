/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int temp;
    cin >> temp;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int t1;
        cin >> t1;
        if (t1 < temp)
            ans += temp - t1;
        else
            temp = t1;
    }
    cout << ans << endl;
    return 0;
}