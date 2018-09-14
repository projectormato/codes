#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int xsa = x1-x2, ysa = y1-y2;
  double d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  cout << x1-xsa << " " << y1+ysa << " " << x2-xsa << " " << y2+ysa << endl;
}
