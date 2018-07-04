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
  int n;
  cin >> n;
  int now = 195*999 + (1000/3)*5;
  int y, m, d;
  rep(i, n){
    cin >> y >> m >> d;
    int keika = 195*(y-1) + ((y-1)/3)*5 + (d-1); //年と日
    if (y%3 == 0) {
      keika += (m-1)*20;
    }else{
      if ( (m-1) % 2 == 0 ) {
        keika += (m-1)/2*39;
      }else{
        keika += (m-1)/2*39;
        keika += 20;
      }
    }
    cout << now-keika << endl;
  }

}
