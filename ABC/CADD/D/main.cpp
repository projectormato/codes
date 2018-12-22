#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll n, ki = 0, gu = 0;
  cin >> n;
  ll a;
  rep(i, n){
    cin >> a;
    if (a % 2 == 0) {
      gu += 1;
    }else{
      ki += 1;
    }
  }
  if (ki != 0) {
    cout << "first" << endl;
  }else{
    cout << "second" << endl;
  }
}
