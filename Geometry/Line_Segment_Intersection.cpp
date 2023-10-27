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
  return (b-a) ^ (c-a);
}
 
bool left(point a, point b, point c){
  return area2(a, b, c) > 0;
}
 
bool collinear(point a, point b, point c){
  return area2(a, b, c) == 0;
}
 
struct line{
  point p, q;
  line(point p, point q) : p(p), q(q) {}
  line() {}
 
  bool segHas(point r){
    return collinear(p, q, r)
      && (min(p.x, q.x) <= r.x && r.x <= max(p.x, q.x))
      && (min(p.y, q.y) <= r.y && r.y <= max(p.y, q.y));
  }
};
 
bool checkInter(line a, line b){
  if(a.segHas(b.p) || a.segHas(b.q) || b.segHas(a.p) || b.segHas(a.q))
    return 1;
  return left(a.p, a.q, b.p) != left(a.p, a.q, b.q)
    && left(b.p, b.q, a.p) != left(b.p, b.q, a.q);
}
 
void solve(){
  point a, b, c, d;
  cin >> a.x >> a.y;
  cin >> b.x >> b.y;
  cin >> c.x >> c.y;
  cin >> d.x >> d.y;
  line l1(a, b);
  line l2(c, d);
  if(checkInter(l1, l2)) cout << "YES\n";
  else cout << "NO\n";
}
 
signed main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
