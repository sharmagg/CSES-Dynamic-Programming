#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl

//------------------------------------------------------------

void solve(){
    int n, x;
    cin >> n >> x;
    int price[n], pages[n];
    for (auto &it: price) cin >> it;
    for (auto &it: pages) cin >> it;

    int dp[x+1] = {0};
    
    for (int i=0; i<n; ++i){
        for (int j=x; j>=price[i]; --j){
            dp[j] = max(dp[j], pages[i]+ dp[j - price[i]]);
        }
    }

    cout << dp[x] << endl;
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
