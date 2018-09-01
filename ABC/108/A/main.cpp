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
  if (N % 2 == 0) {
    cout << pow(N/2, 2) << endl;
  }else{
    cout << (N/2)*(N/2+1) << endl;
  }
}
