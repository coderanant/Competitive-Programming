/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    s += '/';
    int ans = 1, temp = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            ans = max(ans, temp);
            temp = 1;
        } else
            temp++;
    }
    cout << ans;
    return 0;
}