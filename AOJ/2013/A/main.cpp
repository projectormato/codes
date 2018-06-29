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
  int H, W;
  int len = 0, now_len = 0, ah = 0, aw = 0, len_sa = 100;
  bool flag = false;
  while (true) {
    cin >> H >> W;
    if (H == 0 && W == 0) {
      break;
    }
    len = pow(H,2)+pow(W,2);
    FOR(i, 1, 150){
      FOR(j, i+1, 150){
        now_len = pow(i, 2) + pow(j, 2);
        if (now_len >= len) {
          if (len_sa > (now_len - len) && !(i == H && j == W) ) {
            if (now_len - len == 0) {
              if (H >= i) {
                break;
              }
            }
            len_sa = now_len - len;
            ah = i;
            aw = j;
          }
        }
      }
    }
    cout << ah << " " << aw << endl;
    len_sa = 100;
  }
}
