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
    
    string s; cin >> s;
 
    s.pb('#');
 
    int M = 0;
    int seq = 1;
 
    for(int i=0; i < s.size(); i++){
        if(s[i] == s[i+1]) seq++;
 
        else{
            M = max(M, seq);
            seq=1;
        }
    }
    
    cout << M << endl;
 
    return 0;
}
