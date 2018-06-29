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
  int M, T, P, R;
  cin >> M >> T >> P >> R;
  int m, t, p, j;
  int is_ans[T][P];
  int ans_time[T][P];
  int ans_sum[T][3];
  memset(ans_sum, 0, sizeof(ans_sum));
  // rep(i, T){
  //   ans_sum[i][0] = 0;
  //   ans_sum[i][1] = 0;
  // }
  rep(i, T){
    rep(i, P){
      ans_time[i][j] = 0;
      is_ans[i][j] = 1;
    }
  }
  rep(i, R){
    cin >> m >> t >> p >> j;
    is_ans[t][p] = j;
    if (j == 1) {
      ans_time[t][p] += 20;
    }else{
      ans_time[t][p] += m;
    }
  }
  rep(i, T){
    ans_sum[i][2] =i;
    rep(j, P){
      if (is_ans[i][j] == 0) {
        ans_sum[i][0] += 1;
        ans_sum[i][1] += ans_time[i][j];
      }
    }
  }
  rep(i, T){
    cout << ans_sum[i][0] << " " << ans_sum[i][1] << " " << ans_sum[i][2] << endl;
  }
}
