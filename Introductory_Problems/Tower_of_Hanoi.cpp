#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<pair<int, int>> ans;

void hanoi(int n, int src, int dst){
    if(n == 0) return;
    int other;
    for(int i=1; i<=3; i++){
        if(i != src && i != dst) other = i;
    }
    hanoi(n-1, src, other);
    ans.push_back({src, dst});
    hanoi(n-1, other, dst);
}

void solve(){
    int n; cin >> n;
    hanoi(n, 1, 3);
    cout << ans.size() << '\n';
    for(auto [src, dst] : ans){
        cout << src << ' ' << dst << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
