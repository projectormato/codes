#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int N, A[3], res = 0;
  cin >> N >> A[0] >> A[1] >> A[2];
  int l[N];
  rep(i, N) {
    cin >> l[i];
  }
  rep(i, 3) {
    int mi = 10000, target = 100000;
    rep(j, N) {
      if (mi > abs(A[i]-l[j])) {
        mi = abs(A[i]-l[j]);
        target = j;
      }
    }
    
    cout << mi << endl;
  }

}
