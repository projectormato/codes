#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  int A, B;
  cin >> A >> B;
  if (A <= 8 && B <= 8) {
    cout << "Yay!" << endl;
  }else{
    cout << ":(" << endl;
  }
}
