#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

int main(){
  ll a, b, c, x, y, sa, result = 0;
  cin >> a >> b >> c >> x >> y;
  if (c*2 <= a) {
    result += x*c*2;
    y -= x;
    if (y > 0) {
      result += min(c*2, b)*y;
    }
    puts(result)
    exit(0);
  }else if (c*2 <= b) {
    result += y*c*2;
    x -= y;
    if (x > 0) {
      result += min(c*2, a)*x;
    }
    puts(result)
    exit(0);
  }else if (c*2 >= a+b) {
    result += a*x;
    result += b*y;
    puts(result)
    exit(0);
  }else{
    result += min(x, y) * (c*2);
    if (x > y) {
      result += (x-y)*a;
    }else{
      result += (y-x)*b;
    }
  }
  puts(result)
}
