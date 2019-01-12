#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N, Q;
  cin >> N >> Q;
  ll A[N], X[Q];
  rep(i, N){
    cin >> A[i];
  }
  rep(i, Q){
    cin >> X[i];
  }
  // rep(i, N) {
  //   cout << A[i] << endl;
  // }
  //それぞれのパターンを求める
  ll max = 0, middle = 0, min = 0;
  for (int i = N-1; i >= N/2; i--) {
    max += A[i]; //Xが小さい時
  }
  for (int i = N-1; i >= 0; i -= 2) {
    min += A[i]; //Xが大きい時
  }
  for (int i = N-1; i >= N/2+1; i--) {
    middle += A[i]; //Xが小さい時
  }
  middle += A[0];
  if (N%2 == 1) { // 奇数個
    rep(i, Q) {
      if (abs(X[i] - A[N/2-1]) < abs(X[i] - A[N/2])) {
        cout << max << endl;
      }else if (X[i] > A[N/2+1]) {
        cout << min << endl;
      }else if (abs(X[i]-A[N/2]) > abs(A[N/2+1] - X[i])) {
        cout << min << endl;
      }else {
        cout << middle << endl;
      }
    }
  }else {
    rep(i, Q) {
      if (abs(X[i]-A[N/2]) < abs(X[i]-A[N/2-1])) {
        cout << min << endl;
      }else{
        cout << max << endl;
      }
    }
  }

  // cout << max << " " << min << " " << middle <<endl;
}
