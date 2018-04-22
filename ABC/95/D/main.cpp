#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

ll n, c, now_karori = 0, now_basyo = 0, result = 0;
ll x[1000001], y[1000001];

int rec(ll i, ll j){
  if (i == n) {
    result = 0;
  }else{
    result = max(rec(i+1, j+1), rec(i+1, j+1) + x[i]-(y[i]-now_basyo) );
    now_basyo = y[i];
  }
  return result;
}


int main(){
  cin >> n >> c;
  rep(i, n){
    cin >> x[i] >> y[i];
  }

  puts(rec(0,0))
}
