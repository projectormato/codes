#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int xsa = x1-x2, ysa = y1-y2;
  double d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  // cout << d << endl;
  FOR(i, -200, 200){
    FOR(j, -200, 200){
      if (sqrt(pow(x2-i, 2) + pow(y2-j, 2)) == d) {
        FOR(k, -200, 200){
          FOR(m, -200, 200){
            if (sqrt(pow(i-k, 2) + pow(j-m, 2)) == d) {
              if (sqrt(pow(k-x1, 2) + pow(m-y1, 2)) == d) {
                if (sqrt(pow(x1-i, 2) + pow(y1-j, 2)) == sqrt(2)*d) {
                  cout << "y:" << y1-y2 << " " << j-m << endl;
                  cout << "x:" << x1-x2 << " " << i-k << endl;
                  // cout << "yyy:" << y2-j << " " << y1-m << endl;
                  cout << "xxx:" << x2-i << " " << x1-k << endl;
                  // if (y2-j == y1-m && x2-i == x1-k) {
                    cout << i << " " << j << " ";
                    cout << k << " " << m << endl;
                    // exit(0);
                  // }
                }
              }
            }
          }
        }
      }
    }
  }
  // cout << x2-d << " " << y2-d << " " << x1-d << " " << y1-d << endl;
}
