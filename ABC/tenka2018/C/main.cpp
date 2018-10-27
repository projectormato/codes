#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N, result = -10, now = 0, index = 0;
  cin >> N;
  ll A[N], ans[N], ans2[N];
  rep(i, N){
    cin >> A[i];
  }
  sort(A, A+N);
  rep(i, N){
    cout << A[i] << " ";
  }
  cout << endl;
  //小さいの真ん中パターンと大きいの真ん中パターンの両方を試す
  //小さいのが真ん中
  ans[N/2] = A[0];
  step(i, 0, N-2, 2){
    if (index % 2 == 0) {
      ans[(N/2)-index-1] = A[N - index-1];
      ans[(N/2)+index+1] = A[N - index-2];
    }else{
      ans[(N/2)-index-1] = A[index];
      ans[(N/2)+index+1] = A[index+1];
    }
    index += 1;
  }
  if (N%2==0) {
    ans[0] = A[N/2-1];
  }
  rep(i, N){
    cout << ans[i] << " ";
  }
  cout << endl;
  rep(i, N-1){
    now += abs(ans[i]-ans[i+1]);
  }
  // cout << now << endl;
  result = now;
  now = 0;
  index = 0;

  //大きいのが真ん中
  ans2[N/2] = A[N-1];
  step(i, 0, N-2, 2){
    if (index % 2 == 0) {
      ans2[(N/2)-index-1] = A[index];
      ans2[(N/2)+index+1] = A[index+1];
    }else{
      ans2[(N/2)-index-1] = A[N - index-1];
      ans2[(N/2)+index+1] = A[N - index-2];
    }
    index += 1;
  }
  if (N%2 == 0) {
    ans2[0] = A[N/2];
  }

  rep(i, N){
    cout << ans2[i] << " ";
  }
  cout << endl;
  rep(i, N-1){
    now += abs(ans2[i]-ans2[i+1]);
  }
  // cout << now << endl;
  result = max(result, now);
  cout << result << endl;
}
