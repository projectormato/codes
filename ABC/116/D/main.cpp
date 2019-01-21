#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<ll, ll> P;

int main(){
  ll N, K, t, d, sum1 = 0, sum2 = 0, cnt = 0;
  cin >> N >> K;
  ll syurui[N], syurui2[N];
  vector<P> pi(N);
  rep(i, N) {
    syurui[i] = 0;
    syurui2[i] = 0;
    cin >> t >> d;
    pi[i] = make_pair(d, t);
  }
  sort(pi.begin(), pi.end(), greater<P>());
  // rep(i, N) {
  //   cout << pi[i].first  << " " << pi[i].second <<endl;
  // }

  // 単に大きい順
  rep(i, K) {
    sum1 += pi[i].first;
    syurui[pi[i].second-1] = 1;
  }
  rep(i, N) {
    if (syurui[i] == 1) cnt += 1;
    // cout << syurui[i] << endl;
  }
  sum1 += cnt*cnt;
  // cout << sum1 << endl;
  //種類大きい順
  ll totta = 0;
  rep(i, N) {
    // 撮られてない種類
    if (syurui2[pi[i].second] == 0) {
      sum2 += pi[i].first;
      totta += 1;
      syurui2[pi[i].second] = 1;
      if (totta == K) break;
    }
  }
  //種類大きい順に取って足りない場合
  rep(i, K-totta) {

  }
  cnt = 0;
  rep(i, N) {
    if (syurui2[i] == 1) cnt += 1;
    // cout << syurui[i] << endl;
  }
  sum2 += cnt * cnt;
  if (sum1 >= sum2) {
    cout << sum1 << endl;
  }else {
    cout << sum2 << endl;
  }
}
