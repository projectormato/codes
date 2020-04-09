#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int N, M;
  cin >> N >> M;
  double A[N];
  rep(i, N) {
    cin >> A[i];
  }
  sort(A, A+N, std::greater<int>());
  double sum = accumulate(A, A+N, 0);
  double target = A[M-1];
  if ((target / sum) < (1.0/ (4.0 * M))) {
    cout << "No" << "\n";
  } else {
    cout << "Yes" << "\n";
  }
}
