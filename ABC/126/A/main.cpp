#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  std::locale l = std::locale::classic();
  int a, b;
  string n;
  cin >> a >> b >> n;
  n[b-1] = std::tolower(n[b-1], l);
  cout << n << endl;
}
