#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int N, T, result = 100000;
  cin >> N >> T;
  int cost[2];
  rep(i, N){
    cin >> cost[0] >> cost[1];
    if (T >= cost[1]) {
      result = min(result, cost[0]);
    }
  }
  if (result == 100000) {
    cout << "TLE" << endl;
  }else{
    cout << result << endl;
  }
}
