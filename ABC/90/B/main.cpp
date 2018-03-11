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
  int a, b, result = 0;
  cin >> a >> b;
  FOR(i, a, b+1){
    string now = to_string(i);
    if (now[0] == now[now.length()-1] && now[1] == now[now.length()-2]) {
      result += 1;
    }
  }
  puts(result)
}
