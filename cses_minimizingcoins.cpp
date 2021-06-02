#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl

//------------------------------------------------------------

void solve(){
    int n, sum;
    cin >> n >> sum;
    int coins[n];
    for (auto &it: coins) cin >> it;

    vector<int> dp(sum+1, INT_MAX);
    dp[0] = 0;
    
    for (int i=1; i<=sum; ++i){
        for (auto c: coins){
            if (c <= i) dp[i] = min(dp[i], 1+ dp[i-c]);
        }
    }

    cout << ((dp[sum] == INT_MAX) ? -1 : dp[sum]) << endl;
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
