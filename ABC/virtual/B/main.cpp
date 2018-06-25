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
  string S;
  cin >> S;
  string SR = S;
  // reverse(SR.begin(), SR.end());
  int ans = 0;
  int syoki = S.size();
  rep(i, syoki+1){
    int len = S.size();
    string mae =  S.substr(0, len/2);
    string usiro = S.size() % 2 == 1 ? S.substr(len/2+1, len) : S.substr(len/2, len);
    reverse(usiro.begin(), usiro.end());
    // cout << mae << "  " << usiro << endl;
    if (mae == usiro) {
      break;
    }else{
      S.insert(S.end()-i, SR[i]);
      ans += 1;
    }
  }
  cout << ans << endl;
}
