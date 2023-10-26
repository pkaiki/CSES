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
    
    if(n%4 == 0){
        cout << "YES" << endl;
        cout << n/2 << endl;
        for(int i=1; i<=n/4; i++){
            cout << i << ' ';
        }
        for(int i= n - n/4 + 1; i<=n; i++){
            cout << i << ' ';
        }
        cout << endl;
        cout << n/2 << endl;
        for(int i=n/4 + 1; i<=n - n/4; i++){
            cout << i << ' ';
        }
        cout << endl;
        return 0;
    }
 
    if(n%4 == 2){
        cout << "NO" << endl;
        return 0;
    }
 
    if(n%4 == 3){
        cout << "YES" << endl;
        int k = (n-3)/4;
        k++;
        cout << 2*k-1 << endl;
        for(int i=1; i<k; i++) cout << i << ' ';
        for(int i=n-k+1; i<=n; i++) cout << i << ' ';
        cout << endl;
        cout << n - 2*k + 1 << endl;
        for(int i=k; i < n-k+1; i++){
            cout << i << ' ';
        }
        cout << endl;
        
    }
 
    if(n%4 == 1){
        cout << "NO" << endl;
        return 0;
    }
 
	return 0;
}
 
