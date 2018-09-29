#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int N;
  cin >> N;
  rep(i, 120){
    string s = to_string(N);
    if (s[0] == s[1] && s[1] == s[2]) {
      cout << s << endl;
      exit(0);
    }else{
      N += 1;
    }
  }
}
