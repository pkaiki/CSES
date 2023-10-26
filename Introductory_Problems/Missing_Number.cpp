#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ld long double
#define int long long
#define dbg(x) cerr << #x << "=" << x << ' '
#define dbgl(x) cerr << #x << "=" << x << endl;
#define ln cerr << "line:" << __LINE__ << " fine, thanks" << endl
#define all(v) v.begin(),v.end()
#define pb push_back
#define ii pair<int, int>
#define frt first
#define snd second
const ld PI = acos(-1);
#define INF 0x3f3f3f3f
#define oo 0x3f3f3f3f3f3f3f3f
#define MAXN 
 
signed main(){
    fastio();
 
    int n; cin >> n;
 
    vector<int> num(n+1);
 
    for(int i=0; i<n-1; i++){
        int x; cin >> x;
        num[x] = 1;
    }
 
    for(int i=1; i<=n; i++){
        if(num[i] == 0) cout << i << endl;
    }
    return 0;
}
