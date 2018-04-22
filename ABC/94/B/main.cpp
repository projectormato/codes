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
  int n, m, x, result = 0, sum = 0;
  cin >> n >> m >> x;
  int a[n] = {0};
  rep(i, m){
    int tmp;
    cin >> tmp;
    a[tmp] = 1;
  }

  FOR(i, 0, x){
    sum += a[i];
  }
  FOR(i, x, n){
    result += a[i];
  }
  result = min(result, sum);
  puts(result)
}
