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

int d, g;
ll score[11][2];

int dfs(int i, ll sum) {
  if (sum >= g) return i;
  dfs(i+1, )
}

int main(){
  cin >> d >> g;
  rep(i, d){
    cin >> score[i][0] >> score[i][1];
  }
}
