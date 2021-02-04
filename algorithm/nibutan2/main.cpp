#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;

// ref: https://cpprefjp.github.io/
// https://atcoder.jp/contests/abc174/tasks/abc174_e
int main(){
    ll n, k;
    cin >> n >> k;
    ll maruta[n];
    rep(i, n) {
        cin >> maruta[i];
    }
    ll high = 1000000001;
    ll row = 0;
    ll mid = 0;
    ll count = 0;
    ll ans = 1000000001;
    ll loop = ceil(sqrt(100001));
    rep(i, loop) {
        // このmidの長さにするために、k回で足りるか？を算出する
        mid = (row + high) / 2;
        // cout << "mid: " << mid << endl;
        count = 0;
        rep(i, n) {
            // 丸太がmidよりも大きければ切る必要がある回数をcount
            if (maruta[i] > mid ) {
                // cout << "ceil(maruta[i] / mid): " << ceil((double) maruta[i] / mid) << endl; 
                count += ceil((double)maruta[i] / (double)mid) - 1;
            }
        }
        // cout << "count: " << count << endl; 
        if (count <= k) {
            if (mid < ans) {
                ans = mid;
                // cout << "ans更新: " << ans << endl; 
            }
            // k回で切り切れる(midはもっと小さく出来るかも)
            high = mid;
        } else {
            // k回では切りきれない(midが小さすぎる)
            row = mid;
        }
    }
    cout << max(ans, (ll)1) << endl;
}
