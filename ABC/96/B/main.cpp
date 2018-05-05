#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  int n[3], k;
  cin >> n[0] >> n[1] >> n[2] >> k;
  sort(n, n+3);
  rep(i, k){
    n[2] *= 2;
  }
  cout << n[0]+n[1]+n[2] << '\n';
}
