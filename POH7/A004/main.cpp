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
  int l, n, m;
  cin >> l >> n >> m;
  int sen[m][3];
  rep(i, m){
    cin >> sen[i][0] >> sen[i][1] >> sen[i][2];
  }
  int ans = 1, tate = 0; //答え兼今いる場所
  bool back = false;
  while (true) {
    int go, mi = 100000; //通る棒、より小さい方を選ぶ
    rep(i, m){

      if (sen[i][0] == ans && l - sen[i][1] > tate) { //右に行く場合
        if (mi > l - sen[i][1]) {
          mi = l - sen[i][1];
          go = i;
          back = false;
        }
      }

      if (sen[i][0]+1 == ans && l - sen[i][2] > tate) { //左に行く場合
        if (mi > l - sen[i][2]) {
          mi = l - sen[i][2];
          go = i;
          back = true;
        }
      }

    }
    // cout << go << " " << mi << endl;
    if (mi == 100000) break;
    //棒が決まった
    if (back) {
      ans -= 1;
      tate = l - sen[go][1];
    }else{
      ans += 1;
      tate = l - sen[go][2];

    }
  }
  cout << ans << endl;
}
