#include <bits/stdc++.h>
#define int long long
using namespace std;

struct point{
  int x, y;
  point(int x, int y) : x(x), y(y) {}
  point() {}

  point operator-(const point& other) const{
    return point(x - other.x, y - other.y);
  }

  int operator^(const point& other) const{
    return x*other.y - y*other.x;
  }
};

int area2(point a, point b, point c){
  return (b - a) ^ (c - a);
}

bool left(point a, point b, point c){
  return area2(a, b, c) > 0;
}

bool right(point a, point b, point c){
  return area2(a, b, c) < 0;
}

bool collinear(point a, point b, point c){
  return abs(area2(a, b, c)) == 0;
}

void solve(){
  point a, b, c;
  cin >> a.x >> a.y;
  cin >> b.x >> b.y;
  cin >> c.x >> c.y;

  if(left(a, b, c)) cout << "LEFT\n";
  if(right(a, b, c)) cout << "RIGHT\n";
  if(collinear(a, b, c)) cout << "TOUCH\n";
}

signed main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
