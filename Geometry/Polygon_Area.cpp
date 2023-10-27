#include <bits/stdc++.h>
#define int long long
using namespace std;
 
struct point{
  int x, y;
  point(int x, int y) : x(x), y(y) {}
  point() {}
 
  point operator-(const point& other) const{
    return point(x-other.x, y-other.y);
  }
 
  int operator^(const point& other) const{
    return x*other.y - y*other.x;
  }
};
 
int area2(point a, point b, point c){
  return (b-a)^(c-a);
}
 
void solve(){
  int n; cin >> n;
  point p[n];
  for(int i=0; i<n; i++) cin >> p[i].x >> p[i].y;
  int sum = 0;
  for(int i=1; i+1<n; i++){
    sum += area2(p[0], p[i], p[i+1]);
  }
  cout << abs(sum) << '\n';
}
 
signed main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}
