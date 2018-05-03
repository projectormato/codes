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
  int N;
  cin >> N;
  ll sum[N+1], a, result = 0, add = 0;
  sum[0] = 0;
  rep(i, N){
    cin >> a;
    sum[i+1] = sum[i]+a;
  }
  sort(sum, sum+N+1);
  rep(i, N){
    if (sum[i] == sum[i+1]) {
      add += 1;
      result += add;
    }else{
      add = 0;
    }
  }
  puts(result)
}
