#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int limit = 859;
  int ans = 0;
  int den[n];
  rep(i, n) {
    string den1;
    string den2;
    cin >> den1 >> den2;
    if (den2.size() == 1) {
      den[i] = stoi(den1+'0'+den2);
    } else {
      den[i] = stoi(den1+den2);
    }
  }
  rep(i, n) {
    if (den[i] + b + c <= limit) {
      if (ans < den[i]) {
        ans = den[i];
      }
    }
  }
  if (ans % 100 < a) {
    ans -= 100;
    ans += 60;
    ans -= a;
  } else {
    ans = ans - a;
  }
  if (ans%100 < 10) {
    cout << "0" + to_string(ans/100) + ":0" + to_string(ans%100) << "\n";
  } else {
    cout << "0" + to_string(ans/100) + ":" + to_string(ans%100) << "\n";
  }
}
