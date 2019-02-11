#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int in[6];
  rep(i, 6) {
    cin >> in[i];
  }
  sort(in, in+6);
  if (in[0] == 1 && in[2] == 2 && in[1] == 2 && in[3] == 3 && in[4] == 3 && in[5] == 4) {
    cout << "YES" << endl;
  }else {
    cout << "NO" <<endl;
  }
}
