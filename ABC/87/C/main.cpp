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
  int n, now = 0, result = 0, flag;
  cin >> n;
  int a[2][n];
  rep(i, n){
    cin >> a[0][i];
  }
  rep(i, n){
    cin >> a[1][i];
  }

  rep(i, n){
    flag = 0, now = 0;
    rep(j, n){
      if (i == j) {
        now += a[flag][j];
        flag = 1;
      }
      now += a[flag][j];
    }
    result = max(result, now);
  }
  puts(result)
}
