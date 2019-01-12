#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int n, a, b, prob[3] = {0,0,0};
  cin >> n >> a >> b;
  int p[n];
  rep(i, n) {
    cin >> p[i];
  }
  rep(i, n) {
    if (p[i] <= a) {
      prob[0] += 1;
    }else if (p[i] <= b) {
      prob[1] += 1;
    }else {
      prob[2] += 1;
    }
  }
  if (prob[0] >= prob[1]) {
    if (prob[1] >= prob[2]) {
      cout << prob[2] << endl;
    }else{
      cout << prob[1] << endl;
    }
  }else{
    if (prob[0] >= prob[2]) {
      cout << prob[2] << endl;
    }else{
      cout << prob[0] << endl;
    }
  }
}
