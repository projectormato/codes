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
  int a[5] = {1, 2, 3, 4, 5};
  rep(i ,5){
    if (i == 2) {
      erase(begin(a)+i, end(a));
    }
    puts(a[i])
  }
}
