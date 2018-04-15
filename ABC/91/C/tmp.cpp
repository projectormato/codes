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
  int n, result = 0, rresult = 0;
  cin >> n;
  vector< pair<int, int> > ab;
  vector< pair<int, int> > cd;
  vector< pair<int, int> > rcd;
  vector< pair<int, int> > rab;
  // int ab[n][2], cd[n][2];
  rep(i, n){
    int a, b;
    cin >> a >> b;
    ab.push_back( make_pair(a,b) );
    rab.push_back( make_pair(b,a) );
  }
  rep(i, n){
    int c, d;
    cin >> c >> d;
    cd.push_back( make_pair(c,d) );
    rcd.push_back( make_pair(d, c) );
  }


  sort(ab.begin(), ab.end());
  sort(cd.begin(), cd.end());
  rep(i, n){
    rep(j, n){
      if (cd[j].first > ab[i].first && cd[j].second > ab[i].second) {
        // cout << cd[j].first << ab[i].first << cd[j].second << ab[i].second << endl;
        result += 1;
        cd[j].first = 0;
        cd[j].second = 0;
        break;
      }
    }
  }


  sort(ab.begin(), ab.end());
  sort(rcd.begin(), rcd.end());
  rep(i, n){
    rep(j, n){
      if (rcd[j].first > rab[i].first && rcd[j].second > rab[i].second) {
        // cout << rcd[j].first << rab[i].first << rcd[j].second << rab[i].second << endl;
        rresult += 1;
        rcd[j].first = 0;
        rcd[j].second = 0;
        break;
      }
    }
  }
  result = max(result,rresult);
  puts(result)
}
