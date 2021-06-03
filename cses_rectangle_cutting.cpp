#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

//------------------------------------------------------------

void solve(){
    int width, height;
    cin >> width >> height;
    vector<vector<int>> dp(width+ 1, vector<int>(height+ 1));

    for (int w=1; w <= width; ++w){
        for (int h=1; h <= height; ++h){
            if (w == h){
                dp[w][h] = 0;
                continue;
            }
            dp[w][h] = INT_MAX;
            // horizontal cuts
            for (int k = 1; k < h; ++k){
                dp[w][h] = min(dp[w][h], 1+ dp[w][h-k]+ dp[w][k]);
            }
            //vertical cut
            for (int k = 1; k < w; ++k){
                dp[w][h] = min(dp[w][h], 1+ dp[w-k][h]+ dp[k][h]);
            }
        }
    }

    cout << dp[width][height] << '\n';
}

// ------------------------------------------------------------

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t = 1;
    // cin >> t;

    while (t--){
        solve();
    }
}
