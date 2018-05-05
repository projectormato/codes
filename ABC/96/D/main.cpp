#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  int N, count = 0;
  cin >> N;
  ll M = 5555;
  int arr[M+1];
  for(int i = 0; i < M; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(M); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < M; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for(int i = 2; i < M; i++){
    if (count >= N) {
      cout << '\n';
      break;
    }
		if(arr[i]){
      string st = to_string(i);
      if (st[st.size()-1] == '1') {
        cout << to_string(i) << " ";
        count += 1;
      }
		}
	}
}
