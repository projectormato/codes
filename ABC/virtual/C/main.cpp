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
  int N, odd = 0, even = 0;
  cin >> N;
  ll a[N];
  rep(i, N){
    cin >> a[i];
  }
  rep(i, N){
    if (a[i] % 2 == 0) {
      even += 1;
    }else{
      odd += 1;
    }
  }
  if (odd % 2 == 0) {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
