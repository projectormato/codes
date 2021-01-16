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
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=ja
int main(){
    ll INF = 100000001;
    // V: 頂点の数 E: 辺の数 r: 始点
    ll V, E, r;
    cin >> V >> E >> r;
    ll d[E][3];
    ll ans[V];
    bool checked[V];
    rep(i, E) {
        cin >> d[i][0] >> d[i][1] >> d[i][2];
    }

    rep(i, E) {
        ans[i] = INF;
    }
    rep(i, V) {
        checked[i] = false;
    }
    ans[r] = 0;

    // rep(i ,E) {
        // checkedに含まれておらず、ansが最も小さい頂点を探す
        ll target = INF;
        rep(i, V-1) {
            if(ans[i] <= ans[i+1]) {
                target = i;
            }
        }
        checked[target] = true;

        rep(i, V) {
            if(checked[i]) {

            }
        }

    // }


    rep(i, E) {
        cout << d[i][0] << " " << d[i][1] << " " <<  d[i][2] << endl;
    }

}


