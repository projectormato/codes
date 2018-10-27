#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  string A;
  cin >> A;
  if (A.size() == 2) {
    cout << A << endl;
  }else{
    cout << A[2] << A[1] << A[0] << endl;    
  }
}
