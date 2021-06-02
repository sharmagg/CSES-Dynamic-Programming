#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

//------------------------------------------------------------

void solve(){
    int n;
    cin >> n;
    int dp[n+1] = {1};

    for (int sum=1; sum<=n; ++sum){
        for (int i=1; i<7; ++i){
            if (i <= sum) dp[sum] = (dp[sum]+ dp[sum-i])%mod;
        }
    }

    // for (auto d: dp) cout << d << ' ';
    cout << dp[n] << endl;
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
