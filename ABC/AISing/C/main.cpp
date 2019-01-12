#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int H, W, score[H+2][W+2], res = 0;
  cin >> H >> W;
  string S[H+2], A;
  string B(H+2, '_');
  S[0] = B;
  FOR(i, 1, H+1){
    cin >> A;
    A = "_" + A + "_";
    S[i] = A;
  }
  S[H+1] = B;
  rep(i, H+2) {
    cout << S[i] << endl;
  }


  FOR(i, 1, H+1) {
    FOR(j, 1, W+1) {
      int temp = 0;
      if (S[i][j] == '#') {
        if (S[i][j+1] == '.') temp += 1;
        if (S[i][j-1] == '.') temp += 1;
        if (S[i+1][j] == '.') temp += 1;
        if (S[i-1][j] == '.') temp += 1;
        score[i][j] = temp;
        cout << temp << " i:" <<i << "j:"  << j << endl;

      }

    }
  }
  cout <<score[3][1] << endl;

  FOR(i, 1, H+1) {
    FOR(j, 1, W+1) {
      int temp = 0;

      if (S[i][j] == '.') {
        if (S[i][j+1] == '#') temp += score[i][j+1];
        if (S[i][j-1] == '#') temp += score[i][j-1];
        if (S[i+1][j] == '#') temp += score[i+1][j];
        cout << "s: " << score[i+1][j] << endl;
        if (S[i-1][j] == '#') temp += score[i-1][j];
        cout << temp << " i:" <<i << "j:"  << j << endl;
      }
    }
  }

  rep(i, H+2) {
    cout << S[i] << endl;
  }


}
