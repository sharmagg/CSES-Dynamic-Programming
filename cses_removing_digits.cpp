#include<bits/stdc++.h>
using namespace std;
#define int long long
#define deb(x) cout << #x << "=" << x << endl

//------------------------------------------------------------
int dp[1000005] = {0};

vector<int> numbers(int n){
    vector<int> ans;
    while (n){
        int curr = n%10;
        if (curr) ans.push_back(curr);
        n /= 10;
    }
    return ans;
}

int minsteps(int n){
    if (n == 0) return 0;
    if (dp[n]) return dp[n];

    vector<int> A = numbers(n);
    dp[n] = INT_MAX;
    for (auto num: A){
        dp[n] = min(dp[n], 1+ minsteps(n - num));
    }
    return dp[n];
}

void solve(){
    int N;
    cin >> N;

    int ans = minsteps(N);
    cout << ans << endl;
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
