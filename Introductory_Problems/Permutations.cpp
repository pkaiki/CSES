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
 
signed main(){
    fastio();	
int n; cin >> n;
    vector<int> ans;
 
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
 
    if(n <= 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
 
    if(n == 4){
        cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3 << endl;
        return 0;
    }
 
    for(int i=1; i<=n; i++){
        if(i%2) ans.pb(i);
    }
 
    for(int i=1; i<=n; i++){
        if(i%2 == 0) ans.pb(i);
    }
 
    for(auto x : ans)
        cout << x << ' ';
    cout << endl;
 
	return 0;
}
 
