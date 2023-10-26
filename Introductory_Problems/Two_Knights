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
 
void solve(int x){
    int qntTotal = x*x*x*x - x*x;
    int qnt_seg = (x-4)*(x-4)*8 + (x-4)*4*6 + (x-4)*4*4 + 4*4 + 3*8 + 2*4;
 
    if(x == 1){
        cout << 0 << endl;
        return;
    }
 
    if(x == 2){
        cout << 6 << endl;
        return;
    }
 
    if(x == 3){
        cout << 28 << endl;
        return;
    }
 
    if(x == 4){
        cout << 96 << endl;
        return;
    }
 
    int res = qntTotal - qnt_seg ;
    cout << res/2 << endl;
    
    
}
 
signed main(){
    fastio();	
 
    int n; cin >> n;
 
    for(int i=1; i<=n; i++) solve(i);
 
	return 0;
}
