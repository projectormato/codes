#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;


void erase(int target, int last){
}

int main(){
  bool isAllDotFlag = false;
  int H, W;
  cin >> H >> W;
  string A[H];
  rep(i, H){
    cin >> A[i];
  }

  //横削除
  rep(i, H){
    isAllDotFlag = true;
    rep(j, W){
      if (A[i][j] != '.') {
        isAllDotFlag = false;
      }
    }
    if (isAllDotFlag) {
      FOR(k, i, H-1){
        A[k] = A[k+1];
      }
      A[sizeof(A)/sizeof(A[0])-1] = "";
      i = i-1;
      H = H-1;
    }
  }

  //縦削除
  rep(i, W){
    isAllDotFlag = true;
    rep(j, H){
      if (A[j][i] != '.') {
        isAllDotFlag = false;
      }
    }
    if (isAllDotFlag) { //全部点だった時
      FOR(m, i, W){
        rep(k, H){
          if (m >= W-1) {
            A[k][m] = ' ';
          }else{
            A[k][m] = A[k][m+1];
          }
          i = i-1;
        }
      }
    }
  }

  rep(i, H){
    A[i].erase(remove(A[i].begin(), A[i].end(),' '), A[i].end());
    cout << A[i] << endl;
  }
}
