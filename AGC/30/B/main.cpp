#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll l, n, now = 0, res = 0, costA = 0, costB = 0, temp, res2 = 0;
  cin >> l >> n;
  vector<ll> x;
  vector<ll> x2;
  rep(i, n) {
    cin >> temp;
    x.push_back(temp);
    x2.push_back(temp);

  }
  // sort(x.begin(),x.end());
  // sort(x2.begin(),x2.end());
  // cout << x[sizeof(x)/sizeof(x[0])-1] << endl;
  // x.erase(x.begin());

  //今いる所から遠い方の木を倒していく
  rep(i, n) {
    //反時計周り(単純な方)
    costA = x[0] - now;
    if (costA < 0) {
      costA = l-now + x[0];
    }
    // cout << costA << endl;

    //時計回り(反対の方)
    costB = now + l-x[x.size()-1];
    if (costB > l) {
      costB = now - x[x.size()-1];
    }
    // cout << costB << endl;

    if (costA > costB) {
      res += costA;
      now = x[0];
      x.erase(x.begin()); //最初を削除
      // cout << "加算コスト：" << costA << endl;
    }else{
      res += costB;
      now = x[x.size()-1];
      x.erase(x.begin()+x.size()-1); //最後を削除
      // cout << "加算コスト：" << costB << endl;
    }
    // cout << i << "回目: " <<  res << endl;
  }
  // cout << res << endl;



  now = 0, costA = 0, costB = 0, res2 = 0;
  //今いる所から遠い方の木を倒していく
  //最初だけ近くを倒すver.
  rep(i, n) {
    //反時計周り(単純な方)
    costA = x2[0] - now;
    if (costA < 0) {
      costA = l-now + x2[0];
    }
    // cout << costA << endl;

    //時計回り(反対の方)
    costB = now + l-x2[x2.size()-1];
    if (costB > l) {
      costB = now - x2[x2.size()-1];
    }
    // cout << costB << endl;

    if (i != 0) {

      if (costA > costB) {
        res2 += costA;
        now = x2[0];
        x2.erase(x2.begin()); //最初を削除
        // cout << "加算コスト：" << costA << endl;
      }else{
        res2 += costB;
        now = x2[x2.size()-1];
        x2.erase(x2.begin()+x2.size()-1); //最後を削除
        // cout << "加算コスト：" << costB << endl;
      }
    }else{
      if (costA < costB) {
        res2 += costA;
        now = x2[0];
        x2.erase(x2.begin()); //最初を削除
        // cout << "加算コスト：" << costA << endl;
      }else{
        res2 += costB;
        now = x2[x2.size()-1];
        x2.erase(x2.begin()+x2.size()-1); //最後を削除
        // cout << "加算コスト：" << costB << endl;
      }
    }

    // cout << i << "回目: " <<  res2 << endl;
  }

  if (res > res2) {
    cout << res << endl;
  }else {
    cout << res2 << endl;
  }

}
