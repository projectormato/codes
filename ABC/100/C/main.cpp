#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  ll result = 0;
  int N;
  cin >> N;
  ll A[N];
  rep(i, N){
    cin >> A[i];
  }
  rep(i, N){
    while (true) {
      if (A[i] % 2 == 0) {
        A[i] /= 2;
        result += 1;
      }else{
        break;
      }
    }
  }
  cout << result << endl;
}
