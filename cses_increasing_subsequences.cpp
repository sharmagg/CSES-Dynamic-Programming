#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()

//------------------------------------------------------------

void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &it: A) cin >> it;

    vector<int> ans;
    
    for (int i=0; i<n; ++i){
        auto it = lower_bound(all(ans), A[i]);
        int pos = it - ans.begin();
        if (it == ans.end()) ans.push_back(A[i]);
        else ans[pos] = A[i];
    }

    // for (auto a: ans) cout << a << ' ';
    
    cout << ans.size() << endl;
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
