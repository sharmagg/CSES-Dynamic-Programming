#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl
const int mod = 1e9 + 7;

//------------------------------------------------------------

void solve(){
    int n, sum;
    cin >> n >> sum;
    int coins[n];
    for (auto &it: coins) cin >> it;
    int dp[sum+1] = {0};
    dp[0] = 1;

    for (int i=1; i<=sum; ++i){
        for (auto c: coins){
            if (c <= i) dp[i] = (dp[i] + dp[i-c])%mod;
        }
    }

    cout << dp[sum] <<endl;
}

// ------------------------------------------------------------

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t = 1;
    // cin >> t;

    while (t--){
        solve();
    }
}
