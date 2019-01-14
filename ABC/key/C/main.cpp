#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N;
  cin >> N;
  ll A[N], B[N], sumA = 0, sumB = 0, D[N], mainasuKousuu = 0, mainasuSum = 0, res = 0;
  rep(i, N) {
    cin >> A[i];
    sumA += A[i];
  }
  rep(i, N) {
    cin >> B[i];
    sumB += B[i];
  }
  if (sumB > sumA) {
    cout << -1 << endl;
    exit(0);
  }
  rep(i, N) {
    D[i] = A[i] - B[i];
    if (D[i] < 0) {
      mainasuKousuu += 1;
      mainasuSum += D[i] * (-1);
    }
  }
  res = mainasuKousuu;
  // cout << mainasuKousuu <<" " << mainasuSum <<endl;
  sort(D, D+N, greater<ll>() );
  rep(i, N) {
    if (mainasuSum <= 0) {
      cout << res << endl;
      exit(0);
    }
    res += 1;
    mainasuSum -= D[i];
  }



}
