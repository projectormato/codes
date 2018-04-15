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
  int n, m, result = 0;
  string ns[101], ms[101];
  cin >> n;
  list_input(ns, n)
  cin >> m;
  list_input(ms, m)
  map<string, int> mp;
  rep(i, n){
    auto is_find = mp.find(ns[i]);
    if (is_find != mp.end()) {
      mp[ns[i]] += 1;
    }else{
      mp[ns[i]] = 1;
    }
  }

  rep(i, m){
    auto is_find = mp.find(ms[i]);
    if (is_find != mp.end()) {
      mp[ms[i]] -= 1;
    }
  }

  for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
    result = max(result, itr->second);
  }

  puts(result)

}
