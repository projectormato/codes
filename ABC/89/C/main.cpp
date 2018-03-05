#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

ll combination(long n, int r) {
  ll dividend = 1;
  ll divisor = 1;
  FOR(i, 1, r+1){
    dividend *= (n-i+1);
    divisor *= i;
  }
  return dividend/divisor;
}


int main(){
  int n;
  string input;
  int march[5] = {0};
  cin >> n;
  rep(i, n){
    cin >> input;
    switch (input[0]) {
      case 'M':
        march[0] += 1;
        break;
      case 'A':
        march[1] += 1;
        break;
      case 'R':
        march[2] += 1;
        break;
      case 'C':
        march[3] += 1;
        break;
      case 'H':
        march[4] += 1;
        break;
    }
  }
  ll two = 0, marchsum = 0; // 2の可能性
  rep(i, 5){
    marchsum += march[i];
  }
  ll sum = combination(marchsum, 3); // 総数
  rep(i, 5){
    if (march[i] >= 2) {
      two += (marchsum - march[i])*combination(march[i], 2);
    }
  }
  ll three = 0; // 3の可能性
  rep(i, 5){
    three += combination(max(march[i], 0), 3);
  }
  puts(sum - two - three)
}
