#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
    ll res = 0;
    int rs = 0, gs = 0, bs = 0;
    int n;
    string s;
    cin >> n >> s;
    rep(i, n) {
        if(s[i] == 'R') {
            rs += 1;
        }
        if(s[i] == 'G') {
            gs += 1;
        }
        if(s[i] == 'B') {
            bs += 1;
        }
    }
    int r[rs], g[gs], b[bs];
    rs = 0, gs = 0, bs = 0;
    rep(i, n) {
        if(s[i] == 'R') {
            r[rs] = i;
            rs += 1;
        }
        if(s[i] == 'G') {
            g[gs] = i;
            gs += 1;
        }
        if(s[i] == 'B') {
            b[bs] = i;
            bs += 1;
        }
    }

    int ma, mi, mid;
    rep(i, rs) {
        rep(j, gs) {
            rep(k, bs) {
                if(r[i] > g[j]) {
                    if(r[i] > b[k]) {
                        ma = r[i];
                        mi = min(g[j], b[k]);
                        mid = max(g[j], b[k]);
                    } else {
                        ma = b[k];
                        mi = g[j];
                        mid = r[i];
                    }
                } else {
                    if(g[j] > b[k]) {
                        ma = g[j];
                        mi = min(r[i], b[k]);
                        mid = max(r[i], b[k]);
                    } else {
                        ma = b[k];
                        mi = r[i];
                        mid = g[j];
                    }
                }
                if((mid - mi) != (ma - mid)) {
                    res += 1;     
                }
            }
        }
    }
    cout << res << endl;
}
