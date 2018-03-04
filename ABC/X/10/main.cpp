#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

int main(){
  int txa, tya, txb, tyb, T, V, N;
  cin >> txa >> tya >> txb >> tyb >> T >> V >> N;
  int girl[2][N+1];
  rep(i, N){
    cin >> girl[0][i] >> girl[1][i];
  }

  ll cost, mcost = 100000000000; //最小のコスト
  rep(i, N){
    cost = (ll)sqrt( pow(abs(girl[0][i]-txa), 2) + pow(abs(girl[1][i]-tya), 2) );
    cost += (ll)sqrt( pow(abs(txb - girl[0][i]), 2) + pow(abs(tyb - girl[1][i]), 2) );
    mcost = min(mcost, cost);
  }
  if (mcost <= T*V) {
    puts("YES")
  }else{
    puts("NO")
  }
}
