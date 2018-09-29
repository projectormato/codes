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
  ll vodd[N/2+10], veven[N/2+10], oddmax = 0, evenmax = 0, oddnow = 0, evennow = 0, maxnum[2], beforemax[2];
  rep(i, N/2){
    cin >> vodd[i] >> veven[i];
  }
  if (N == 2) {
    if (vodd[0] == veven[0]) {
      cout << 1 << endl;
      exit(0);
    }
  }
  sort(vodd, vodd+N/2);
  sort(veven, veven+N/2);
  rep(i, N/2-1){
    if (vodd[i] == vodd[i+1]) {
      oddnow += 1;
    }else{
      if (oddnow >= oddmax) {
        beforemax[0] = oddmax;
        oddmax = oddnow;
        maxnum[0] = vodd[i];
      }
      oddnow = 0;
    }

    if (veven[i] == veven[i+1]) {
      evennow += 1;
    }else{
      if (evennow >= evenmax) {
        beforemax[1] = evenmax;
        evenmax = evennow;
        maxnum[1] = veven[i];
      }
      evennow = 0;
    }
  }
  if (oddnow >= oddmax) {
    beforemax[0] = oddmax;
    oddmax = oddnow;
    maxnum[0] = vodd[N/2-1];
  }
  if (evennow >= evenmax) {
    beforemax[1] = evenmax;
    evenmax = evennow;
    maxnum[1] = veven[N/2-1];
  }
  if (maxnum[0] == maxnum[1]) {
    if (evenmax == N/2-1 && oddmax == N/2-1) {
      cout << N/2 << endl;
      exit(0);
    }
    ll ans = min ( (N-2) - oddmax - beforemax[1], (N-2) - beforemax[0] - evenmax);
    cout << ans << endl;
    exit(0);
  }
  // cout << oddmax << " " << evenmax << endl;
  ll ans = (N-2) - oddmax - evenmax;
  cout << ans << endl;
}
