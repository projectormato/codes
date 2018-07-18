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
  int ID[6], N, ans = 0;
  rep(i, 6){
    cin >> ID[i];
  }
  cin >> N;
  int maze[N];
  rep(i, N){
    cin >> maze[i];
  }

  int now = 5, next;
  rep(i, N){
    int now_maze = maze[i];
    if (ID[now] == now_maze) {
      continue;
    }else{
      rep(i, 6){ //正解の目を探す
        if (ID[i] == now_maze) {
          next = i;
        }
      }
      if ( (now == 0 && next == 1 ) || (now == 2 && next == 3) || (now == 4 && next == 5) || (now == 1 && next == 0 ) || (now == 3 && next == 2) || (now == 5 && next == 4)) {
        ans += 2;
      }else{
        ans += 1;
      }
      now = next;
    }
  }
  if (ans >= 1) {
    cout << ans-1 << endl;
  }else{
    cout << ans << endl;
  }
}
