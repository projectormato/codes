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
  ll tmp, x[n], xx[n];
  rep(i, n){
    cin >> tmp;
    x[i] = tmp;
    xx[i] = tmp;
  }
  sort(x, x+n);
  ll left = x[n/2-1], right = x[n/2];
  rep(i, n){
    if (xx[i] >= right) {
      puts(left)
    }else{
      puts(right)
    }
  }

}
