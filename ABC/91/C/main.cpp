#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

int main(){
  int n, result = 0;
  cin >> n;
  vector< pair<int, int> > ab;
  vector< pair<int, int> > cd;
  rep(i, n){
    int a, b;
    cin >> a >> b;
    ab.push_back( make_pair(a,b) );
  }
  rep(i, n){
    int c, d;
    cin >> c >> d;
    cd.push_back( make_pair(c,d) );
  }

  sort(ab.begin(), ab.end());
  sort(cd.begin(), cd.end());
  rep(i, n){
    int flag = -1, maxy = -1;
    rep(j, n){
      if (cd[i].first > ab[j].first) {
        if (ab[j].second >= maxy && cd[i].second > ab[j].second) {
          flag = j;
          maxy = ab[j].second;
        }
      }
    }
    if (flag != -1) {
      ab.erase(ab.begin()+flag);
      result += 1;
    }
  }
  puts(result)
}
