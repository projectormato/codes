#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long
typedef pair<int, int> P;

int main(){
  int x, y, s, a, b, nuki;
  while (true) {
    cin >> x >> y >> s;
    if (x == 0 && y == 0 && s == 0) {
      break;
    }
    int ans = 0, sum = 0;
    FOR(i, 1, s){
      FOR(j, 1, s){
        a = floor(i*(100+x)/100.0);
        b = floor(j*(100+x)/100.0);
        if (a+b == s) {
          a = floor(i*(100+y)/100.0 );
          b = floor(j*(100+y)/100.0 );
          sum = a + b;
          ans = max(ans, sum);
        }
      }
    }
    cout << ans <<  endl;
  }
}
