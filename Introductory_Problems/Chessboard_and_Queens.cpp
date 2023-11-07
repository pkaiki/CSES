#include <bits/stdc++.h>
#define int long long
using namespace std;

char M[8][8];
int dig[100];
int revdig[100];
int line[8];

int queen(int row){
    if(row == 8) return 1;
    int sum = 0;
    for(int i=0; i<8; i++){
        if(M[row][i] == '*') continue;
        if(dig[row+i+50] == 1) continue;
        if(revdig[row-i+50] == 1) continue;
        if(line[i] == 1) continue;
        dig[row+i+50] = 1;
        revdig[row-i+50] = 1;
        line[i] = 1;
        sum += queen(row+1);
        dig[row+i+50] = 0;
        revdig[row-i+50] = 0;
        line[i] = 0;
    }
    return sum;
}

void solve(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> M[i][j];
        }
    }
    cout << queen(0) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}
