#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

//------------------------------------------------------------

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();
    vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));

    for (int j=0; j<=n2; ++j) dp[0][j] = j;
    for (int i=0; i<=n1; ++i) dp[i][0] = i;

    for (int i=1; i<=n1; ++i){
        for (int j=1; j<=n2; ++j){
            if (s1[i-1] != s2[j-1]){
                dp[i][j] = 1 + min({dp[i-1][j-1], dp[i][j-1], dp[i-1][j]});
            }
            else dp[i][j] = dp[i-1][j-1];
        }
    }
    // print2d(dp);
    cout << dp[n1][n2] << endl;
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
