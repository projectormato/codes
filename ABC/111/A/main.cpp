#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  string N;
  cin >> N;
  rep(i, 3){
    if (N[i] == '1') {
      cout << '9';
    }else{
      cout << '1';
    }
  }
  cout << endl;
}
