#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int ans = 0;
  int count = 0;
  int a, b, n;
  cin >> a >> b >> n;
  int pin[n];
  string input;
  rep(i, n) {
    cin >> input;
    if (input == "G") {
      pin[i] = 0;
    } else {
      pin[i] = stoi(input);
    }
  }
  step(i, 0, n, 2) {
    if (count == a) {
      continue;
    }
    if (pin[i] == b) {
      ans += pin[i];
      ans += pin[i+1] + pin[i+2];
      if (count == a-1) {
        ans += pin[i+1] + pin[i+2];
        if (pin[i+1] == b) {
          ans += pin[i+2];
        }
      }
      count += 1;
      i -= 1;
    } else if (pin[i] + pin[i+1] < b) {
      ans += pin[i] + pin[i+1];
      count += 1;
    } else if (pin[i] + pin[i+1] == b) {
      // スペア
      ans += pin[i] + pin[i+1];
      ans += pin[i+2];
      if (i == n-3) {
        ans += pin[n-1];
      }
      count += 1;
    }
  }
  cout << ans << '\n';
}
