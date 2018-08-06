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
  string T, S;
  cin >> S >> T;
  int len = S.size()-1, i = 0;
  while (i < len + 1) {
    if (S == T) {
      cout << "Yes" << endl;
      exit(0);
    }
    char target = S[len];
    S.pop_back();
    S = target + S;
    i += 1;
  }
  cout << "No" << endl;

}
