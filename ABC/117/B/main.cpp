#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int n;
  cin >> n;
  int l[n], sum = 0, ma = -1;
  rep(i, n) {
    cin >> l[i];
    sum += l[i];
    ma = max(ma, l[i]);
  }
  if (ma < sum-ma) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }

}
