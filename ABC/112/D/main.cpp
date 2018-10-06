#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N, M;
  ll result = 1;
  cin >> N >> M;
  for (int i = M/N; i >= 1; i--) {
    if (M % i == 0) {
      result = i;
      break;
    }
  }
  if (N != 1) {
    cout << result << endl;
  }else{
    cout << M << endl;
  }
}
