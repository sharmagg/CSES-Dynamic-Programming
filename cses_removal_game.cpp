#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()

//------------------------------------------------------------
vector<int> A;

int recurse(vector<vector<int>> &dp, int L, int R){
    if (L > R) return 0;
    if (L == R) return A[L];
    if (dp[L][R] != -1) return dp[L][R];

    int curr = max(A[L]+ min(recurse(dp, L+2, R), recurse(dp, L+1,R-1)), 
                   A[R]+ min(recurse(dp, L, R-2), recurse(dp, L+1, R-1)) );
    
    dp[L][R] = curr;
    return curr;
}

void solve(){
    int n;
    cin >> n;
    A.resize(n);
    for (auto &it: A) cin >> it;
    vector<vector<int>> dp(n, vector<int>(n, -1));

    int score = recurse(dp, 0, n-1);
    cout << score << '\n';
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
