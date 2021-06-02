#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl
const int mod = 1e9 + 7;

//------------------------------------------------------------

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    string s;
    for (int i=0; i<n; ++i){
        cin >> s;
        for (int j=0; j<n; ++j){
            if (s[j] == '.') dp[i][j] = 1;
            else dp[i][j] = 0;
        }
    }


    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (dp[i][j] == 0) continue;
            if (i == 0 and j == 0) continue;

            if (i == 0) dp[i][j] = dp[i][j-1]%mod;
            else if (j == 0) dp[i][j] = dp[i-1][j]%mod;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
        }
    }

    cout << dp[n-1][n-1] << endl;
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
