#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int y, x; cin >> y >> x;
    if(x > y){
        if(x%2 == 1){
            cout << x*x - y + 1<< '\n';
        }
        else{
            cout << (x-1)*(x-1)+1 + y - 1 << '\n';
        }
    }
    else{
        if(y%2 == 0){
            cout << y*y - x + 1<< '\n';
        }
        else{
            cout << (y-1)*(y-1)+1 + x - 1<< '\n';
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
