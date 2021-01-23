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

    rep(i, V) {
        ans[i] = INF;
    }
    rep(i, V) {
        checked[i] = false;
    }
    ans[r] = 0;

    rep(i ,V) {
        // checkedに含まれておらず、ansが最も小さい頂点を探す
        ll target = INF;
        rep(j, V) {
            if (checked[j]) {
                continue;
            }
            if (target == INF) {
                target = j;
            }
            if(ans[j] < ans[target]) {
                target = j;
            }
        }
        cout << "今回のターゲット: " << target << endl;
        checked[target] = true;

        rep(j, E) {
            // targetと隣接していて、まだcheckされていない辺のコストを更新する
            if(!checked[d[j][1]] && d[j][0] == target) {
                ans[d[j][1]] = min(ans[d[j][1]], ans[target] + d[j][2]);
            }

            // 辺が無向ならこのif文も必要(双方向で隣接しているかチェックする)
            // if(!checked[d[j][0]] && d[j][1] == target) {
            //     ans[d[j][0]] = min(ans[d[j][0]], ans[target] + d[j][2]);
            // }
        }
        cout << i <<  "回目終わり時点のans: ";
        rep(j, V) {
            cout << ans[j] << " ";
        }
        cout << endl;

    }
    
    // rep(i, V) {
    //     if(ans[i] == INF) {
    //         cout << "INF" << endl;   
    //     } else {
    //     cout << ans[i] << endl;
    //     }
    // }
}


