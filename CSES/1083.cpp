/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum = 0, temp = 0, n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> temp;
        sum += temp;
    }
    cout << n * (n + 1) / 2 - sum;
    return 0;
}