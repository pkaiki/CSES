#include <bits/stdc++.h>
#define int long long
using namespace std;

const int INF = 1e18;

void solve(){
    int n; cin >> n;
    vector<int> p(n);
    int minn = INF;
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i < (1<<n); i++){
        int sum1 = 0, sum2 = 0;
        for(int j=0; j<n; j++){
            if((1<<j) & i)
                sum1 += p[j];
            else 
                sum2 += p[j];
        }
        minn = min(minn, abs(sum1 - sum2));
    }
    cout << minn << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
