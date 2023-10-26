#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve(){
    string s; cin >> s;
    map<char, int> mp;
    for(auto c : s) mp[c]++;
    int odd_num = 0;
    for(int i = 'A'; i <= 'Z'; i++){
        if(mp[i]%2 == 1) odd_num++;
    }
    if(odd_num > 1){
        cout << "NO SOLUTION\n";
        return;
    }
    string Beg;
    string odd;
    string End;
    for(int i='A'; i<='Z'; i++){
        if(mp[i]%2 == 0){
            for(int j=0; j<mp[i]/2; j++){
                Beg.push_back((char)i);
                End.push_back((char)i);
            }
        }
        else{
            for(int j=0; j<mp[i]; j++){
                odd.push_back((char)i);
            }
        }
    }
    reverse(End.begin(), End.end());
    cout << Beg << odd << End << '\n';
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
