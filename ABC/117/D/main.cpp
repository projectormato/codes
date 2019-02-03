#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N, K, res = 0;
  cin >> N >> K;
  ll a[N], sum[45];
  string nisinsuu[N], s;
  rep(i, 45) {
    sum[i] = 0;
  }
  rep(i, N) {
    cin >> a[i];
    stringstream ss;
    ss << bitset<45>(a[i]);
    s = ss.str();
    nisinsuu[i] = s;
  }
  rep(i, N) {
    rep(j, 45) {
      if (nisinsuu[i][j] == '1') {
        sum[j] += 1;
      }
    }
    // cout << nisinsuu[i] << endl;
  }
  //sumが求まった。
  string ans = "";
  for (int i = 44; i >= 0; i--) {
    if (sum[i] >= N/2) {
      ans.insert(0, "0");
    }else {
      ans.insert(0, "1");
    }
  }
  // 値を計算
  for (int i = 44; i >= 0; i--) {
    if (ans[i] == '1') {
      res += pow(2, (45-i-1));
    }
    if (res > K) {
      if (res - pow(2, (45-i-1)) == 0) {
        res = pow(2, (45-i-2));
      }else {
        res -= pow(2, (45-i-1));
      }
      break;
    }
  }
  // cout << res << endl;
  ll result = 0;
  rep(i, N) {
    result += res ^ a[i];
  }
  cout << result << endl;

}
