#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

//------------------------------------------------------------

void solve(){
    int n;
    cin >> n;
    int sum = n*(n+1)/2;

    if (sum&1) {
        cout << 0 << endl;
        return;
    }
    sum /= 2;

    vector<int> dp(sum+1, 0);
    dp[0] = 1;

    for (int num = 1; num <= n; ++num){
        for (int i = sum; i >= num; --i){
            dp[i] = dp[i]%mod + dp[i - num]%mod;
        }
    }
    dp[sum] /= 2;

    cout << dp[sum] << endl;
}

// ------------------------------------------------------------

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t = 1;

    while (t--){
        solve();
    }
}
