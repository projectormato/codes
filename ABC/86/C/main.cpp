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
  ll n;
  cin >> n;
  ll t[n+1], x[n+1], y[n+1], sa;
  rep(i, n){
    cin >> t[i] >> x[i] >> y[i];
  }
  if (t[0] < x[0]+y[0]) {
    puts("No")
    exit(0);
  }

  FOR(i, 1, n){
    sa = abs( (x[i]+y[i]) - (x[i-1]+y[i-1]) );
    if (t[i]-t[i-1] < sa ) {
      puts("No")
      exit(0);
    }
    if ( (t[i]-t[i-1])%2 == 1  && sa%2 == 0 ) {
      puts("No")
      exit(0);
    }
    if ( (t[i]-t[i-1])%2 == 0  && sa%2 == 1 ) {
      puts("No")
      exit(0);
    }
  }
  puts("Yes")
}
