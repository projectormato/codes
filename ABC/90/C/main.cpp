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
  int n, m;
  cin >> n >> m;
  if (n == 1 && m == 1) {
    puts(1)
    exit(0);
  }
  if (n == 1) {
    puts(m-2)
    exit(0);
  }
  if (m == 1) {
    puts(n-2)
    exit(0);
  }

  n = n-2;
  m = m-2;
  ll result = (n*m);
  puts(result)
}
