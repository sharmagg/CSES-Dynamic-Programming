#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

//------------------------------------------------------------

void solve(){
    int n;
    cin >> n;
    int A[n];
    int sum = 0;
    for (int i=0; i<n; ++i){
        cin >> A[i];
        sum += A[i];
    }

    bool dp[sum+1] = {false};
    dp[0] = true;

    for (auto c: A){
        for (int i=sum; i>=c; --i){
            dp[i] = dp[i] or dp[i-c];
        }
    }
    int ans = accumulate(dp+1, dp+sum+1, 0);
    cout << ans << '\n';
    for (int i=1; i<=sum; ++i){
        if (dp[i]) cout << i << ' ';
    }
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
