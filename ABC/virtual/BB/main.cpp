#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long
typedef pair<int, int> P;

int main(){
  int N, ans = 0;
  cin >> N;
  int usagi[N];
  rep(i, N){
    cin >> usagi[i];
  }
  rep(i, N){
    if (usagi[usagi[i]-1] == i+1) {
      ans += 1;
    }
  }
  cout << ans/2 << endl;
}
