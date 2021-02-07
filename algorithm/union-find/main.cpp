#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;


// 親の番号を管理する
int par[100000];

int root(int x) {
    if (par[x] == x) {
        return x;
    } else {
        // 親が他にいる。同時に経路圧縮を行う。
        return par[x] = root(par[x]);
    }
}

bool same(int x, int y) {
    return root(x) == root(y);
}

void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) {
        return;
    }
    // 無向なのでどちらを親にしても良い
    par[x] = y;
}

// ref: https://cpprefjp.github.io/
// ans: https://atcoder.jp/contests/atc001/tasks/unionfind_a
int main(){
    string ans;
    int n, q;
    cin >> n >> q;
    int p[3];
    rep(i, n) {
        // 最初は全ての頂点は自分が親
        par[i] = i;
    }
    rep(i, q) {
        cin >> p[0] >> p[1] >> p[2];
        if (p[0] == 0) {
            unite(p[1], p[2]);
        } else {
            ans = same(p[1], p[2]) ? "Yes" : "No";
            cout << ans << endl;
        }
    }
}
