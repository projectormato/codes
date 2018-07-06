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
  while (true) {
    string a;
    int L, ma, mi, sums[20], count = 1, flag = false, jj = 0;
    cin >> a >> L;
    sums[0] = stoi(a);
    if (L == 0) {
      break;
    }
    char c[L];
    while (true) {
      rep(i, L){
        c[i] = '0';
      }
      rep(i, a.size()){
        c[i] = a[i];
      }
      sort(c, c+L, greater<int>());
      ma = atoi(c);
      sort(c, c+L);
      mi = atoi(c);
      rep(i, count){
        if (sums[i] == ma-mi) {
          flag = true;
          jj = i;
        }
      }
      if (flag) {
        cout << jj << " " << ma-mi << " " << count-jj << endl;
        break;
      }else{
        sums[count] = ma-mi;
        count += 1;
        a = to_string(ma-mi);
      }
    }
  }
}
