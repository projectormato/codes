#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll k, a, b;
  cin >> k >> a >> b;
  if (b <= a || a == b-1) {
    cout << k+1 << endl;
    exit(0);
  }
  if (k <= a) {
    cout << k+1 << endl;
    exit(0);
  }
  //ビスケットの総数はk+1枚
  // 得られる金額は、(k+1)/a円。
  // 得られるビスケットは、得られる金額 * b


  // 叩けるだけたたいて、変換、あまりを足す
  // 1度に1円分しか変換できないので、何回変換する行動をとるか
  // 1度叩いて1円にしたら、以後はビスケットにしてお金にしてを繰り返す
  ll nokori = k+1 - a; // 1円分叩いた余り
  // cout << nokori << endl;
  ll d = b - a; //2回の行動で増える分
  ll sum = (nokori/2) * d;
  if (nokori % 2 == 1) {
    cout << sum+a+1 << endl;
  }else {
    cout << sum+a << endl;
  }
  // ll possible = ((k-1)/a) * b + ((k-1)%a);
  // cout << possible << endl;
  // cout << (k/a)*b << endl;
  // ll henkan = (k+1)/a;
  // cout << henkan*b << endl;

}
