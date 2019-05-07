#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int h, w;
  cin >> h >> w;
  string c[h+10];
  rep(i, h) {
    cin >> c[i];
  }
  rep(i, h){
    cout << c[i] << endl;
    cout << c[i] << endl;
  }
}
