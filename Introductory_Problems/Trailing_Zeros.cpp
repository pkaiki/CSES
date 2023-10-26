#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve(){
    int n; cin >> n;
    int factor_2 = 0, factor_5 = 0;
    int pot;
    //Computing the number of powers of 2
    pot = 2;
    while(n/pot){
        factor_2 += n/pot;
        pot *= 2;
    }
    //Computing the number of powers of 5
    pot = 5;
    while(n/pot){
        factor_5 += n/pot;
        pot *= 5;
    }
    cout << min(factor_2, factor_5) << '\n';
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
