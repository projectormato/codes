#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int K;
  cin >> K;
  queue<ll> que;
  FOR(i, 1, 10) {
    que.push(i);
  }
  ll now = 0;
  rep(i, K) {
    now = que.front();
    que.pop();
    // 次の桁のなんとか数を入れる
    ll amari = now % 10;
    if (amari != 0) {
      que.push(10 * now + amari - 1);
    }
    que.push(10 * now + amari);
    if (amari != 9) {
      que.push(10 * now + amari + 1);
    }
  }
  cout << now << "\n";
}
