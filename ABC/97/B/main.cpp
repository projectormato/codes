#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  int x;
  cin >> x;
  int result = 0;
  FOR(b, 1, sqrt(x)){
    FOR(p, 2, 10){
      if (pow(b,p) <= x) {
        result = max(result, int(pow(b,p)));
      }
    }
  }
  result = result == 0? 1:result;
  cout << result << "\n";
}
