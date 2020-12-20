#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
    ll n, k;
    cin >> n >> k;
    ll t[n][n];
    ll ans = 0;
    ll score = 0;
    rep(i ,n) {
        rep(j, n) {
            cin >> t[i][j];
        }
    }

    ll s[n-1];
    rep(i, n-1) {
        s[i] = i+2;
    }

    do {
        score = 0;
        score += t[0][s[0]-1];
        // cout << t[0][s[0]-1] << " ";
        rep(i, n-2) {
            score += t[s[i]-1][s[i+1]-1];
            // cout << s[i] << " " << s[i+1] << " ";
            // cout << t[s[i]-1][s[i+1]-1] << " ";
        }
        score += t[s[n-2]-1][0];
        // cout << endl;
        // cout << score << endl;
        if (score == k) {
            ans += 1;
        }
    } while (next_permutation(s, s+n-1));

    cout << ans << endl;
}
