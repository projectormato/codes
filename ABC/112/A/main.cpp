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
  if (N == 1) {
    cout << "Hello World" << endl;
  }else{
    int A, B;
    cin >> A >> B;
    cout << A + B << endl;
  }
}
