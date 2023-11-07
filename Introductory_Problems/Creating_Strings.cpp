#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << ans.size() << '\n';
    for(auto st : ans) cout << st << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
