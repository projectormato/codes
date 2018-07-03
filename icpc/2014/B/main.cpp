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
  while (true) {
    int N, chain = 1, score = 0, num, last = 0, now_score = 0;
    cin >> N;
    if (N == 0) break;
    int stone[N][5];
    rep(i, N){
      rep(j, 5){
        cin >> stone[i][j];
      }
    }
    while (true) {
      now_score = score;
      rep(i, N){
        rep(j, 4){
          if (stone[i][j] == stone[i][j+1]) {
            num = stone[i][j];
            last = j+1;
            chain += 1;
          }else{
            if (chain < 3){
              chain = 1, last = 0, num = 0;
            }
            if (chain >= 3)break;
          }
        }
        if (chain >= 3) {
          score += chain * num;
          for (int k  = 0; k < chain; k++) {
            stone[i][last - k] = 0;
          }
        }
        chain = 1, num = 0, last = 0;
      }
      if (now_score == score){
        cout << score << endl;
        break;
      }
      int jun = N-1, tmp;
      rep(j, 5){
        jun = N-1;
        for (int i = N-1; i >= 0; i--) {
          if (stone[i][j] != 0) {
            tmp = stone[i][j];
            stone[i][j] = 0;
            stone[jun][j] = tmp;
            jun -= 1;
          }
        }
      }
      // rep(i, N){
      //   rep(j,5){
      //     cout << stone[i][j] << " ";
      //   }
      //   cout << endl;
      // }
    }
  }
}
