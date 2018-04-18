#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

int main(){
  ll N, n, r=0;
  cin >> N;
  ll a[N];
  rep(i, N){
    cin >> a[i];
  }
  sort(a, a+N);
  n = a[N-1];
  double val = n*1.000/2;
  rep(i, N-1){
    if (abs(val-r) > abs(val-a[i])) {
      r = a[i];
    }
  }
  cout << n << " " << r << endl;
}
