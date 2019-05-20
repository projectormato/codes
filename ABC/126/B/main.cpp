#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  string n;
  cin >> n;
  if ((n[0] == '0' && n[1] == '0') && (n[2] == '0' && n[3] == '0')) {
    cout << "NA" << endl;
    exit(0);
  }
  if ((n[0] == '0' && n[1] == '0')) {
    if (n[2] >= '2' || (n[2] >= '1' && n[3] >= '3')) {
      cout << "NA" << endl;
      exit(0);
    }else {
      cout << "YYMM" << endl;
      exit(0);
    }
  }else if ((n[2] == '0' && n[3] == '0')) {
    if (n[0] >= '2' || (n[0] >= '1' && n[1] >= '3')) {
      cout << "NA" << endl;
      exit(0);
    }else {
      cout << "MMYY" << endl;
      exit(0);
    }
  }
  if (n[0] >= '2' || (n[0] >= '1' && n[1] >= '3')) {
    if (n[2] >= '2' || (n[2] >= '1' && n[3] >= '3')) {
      cout << "NA" << endl;
    }else {
      cout << "YYMM" << endl;
    }
  }else {
    if (n[2] >= '2' || (n[2] >= '1' && n[3] >= '3')) {
      cout << "MMYY" << endl;
    }else {
      cout << "AMBIGUOUS" << endl;
    }
  }

}
