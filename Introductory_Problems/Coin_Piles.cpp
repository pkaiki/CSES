#include <bits/stdc++.h>
using namespace std;
 
void dbg_out() { cerr << endl; }
template <typename H, typename... T> 
void dbg_out(H h, T... t) { cout << ' ' << h; dbg_out(t...); }
#define dbg(...) cout << #__VA_ARGS__ << ':'; dbg_out(__VA_ARGS__);
#define ln cerr << "line:" << __LINE__ << " fine, thanks" << endl
#define pb push_back
#define all(v) v.begin(),v.end()
#define ii pair<int, int>
#define frt first
#define snd second
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define oo 0x3f3f3f3f3f3f3f3f
const long double PI = acos(-1);
using ll = long long;
#define int long long
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
void solve(){
    fastio();	
 
    int a, b; cin >> a >> b;
 
    if(b > a) swap(a, b);
 
    int k = a - b;
 
    if( min(a - 2*k, b - k) < 0){
        cout << "NO" << endl;
        return;
    }
 
    if( (b-k)%3 == 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
signed main(){
    int n; cin >> n;
    while(n--) solve();
}
