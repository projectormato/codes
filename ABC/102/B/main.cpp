#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long
typedef pair<int, int> P;

int main(){
  int N;
  cin >> N;
  ll a[N], ma = 0, mi = 1000000001;
  rep(i, N){
    cin >> a[i];
  }
  rep(i, N){
    ma = max(ma, a[i]);
    mi = min(mi, a[i]);
  }
  cout << ma - mi << endl;
}
