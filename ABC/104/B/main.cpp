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
  string S; bool flag = false;
  cin >> S;
  if (S[0] == 'A') {
    FOR(i, 1, S.size()){
      if (S[i] == 'C') {
        if (!flag && i != 1 && i != S.size()-1) {
          flag = true;
        }else{
          cout << "WA" << endl;
          exit(0);          
        }
      }else if(S[i] >= 'A' && 'Z' >= S[i]) {
        cout << "WA" << endl;
        exit(0);
      }
    }
  }
  if (flag) {
    cout << "AC" << endl;
  }else{
    cout << "WA" << endl;
  }
}
