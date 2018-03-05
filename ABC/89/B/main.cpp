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
  int n;
  cin >> n;
  string s[n];
  int result = 1;
  list_input(s, n)
  sort(s, s+n);
  rep(i, n-1){
    if (s[i] != s[i+1]) {
      result += 1;
    }
  }
  if (result == 4) {
    puts("Four")
  }else{
    puts("Three")
  }
}
