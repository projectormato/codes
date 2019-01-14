#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int n[4];
  rep(i, 4) {
    cin >> n[i];
  }
  sort(n, n+4);
  if (n[0] == 1 && n[1] == 4 && n[2] == 7 && n[3] == 9) {
    cout << "YES" <<endl;
  }else{
    cout << "NO" << endl;
  }
}
