#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<string> res((1<<n), string(n, '0'));
    for(int i=1; i<=n; i++){
        for(int j=0; j < (1<<(i-1)); j++){
            res[(1<<i) - j - 1] = res[j];
            res[(1<<i) - j - 1][i-1] = '1';
        }
    }
    for(int i=0; i<(1<<n); i++){
        cout << res[i] << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
