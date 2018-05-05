#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  bool result = true;
  int H, W;
  cin >> H >> W;
  string input[100];
  rep(i, W+2){
    input[0] += '.';
    input[H+1] += '.';
  }
  FOR(i,1,H+1){
    string tmp = "";
    cin >> tmp;
    tmp = "." + tmp + ".";
    input[i] = tmp;
  }
  FOR(i, 1, H+1){
    FOR(j, 1, W+1){
      if (input[i][j] == '#') {
        if (input[i-1][j] != '#' && input[i+1][j] != '#' && input[i][j-1] != '#' && input[i][j+1] != '#') {
          result = false;
        }
      }
    }
  }
  string ans = result ? "Yes":"No";
  cout << ans << '\n';
}
