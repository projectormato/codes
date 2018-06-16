#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  int D, N;
  cin >> D >> N;
  if (D == 0) {
    if (N%100 == 0) {
      N += 1;
    }
    cout << N << endl;
  }else if (D == 1) {
    if (N%100 == 0) {
      N += 1;
    }
    cout << N*100 << endl;
  }else{
    if (N%100 == 0) {
      N += 1;
    }
    cout << N*10000 << endl;
  }
}
