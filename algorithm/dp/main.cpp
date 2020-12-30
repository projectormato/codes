#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;


// コーヒー豆の問題(0-1ナップサック)を動的計画法で解いてみる
// ref: https://qiita.com/drken/items/a5e6fe22863b7992efdb#2-%E3%83%8A%E3%83%83%E3%83%97%E3%82%B5%E3%83%83%E3%82%AF%E5%95%8F%E9%A1%8C

int main(){
    // ナップサックの大きさ
    int knapsackMax = 5;

    // 与えられるコーヒー豆の種類
    int n;
    cin >> n;

    // 動的計画法の配列 それぞれの種類のコーヒー豆を入れる or 入れないしていった時の重さの時の価値を格納
    int dp[n+10][knapsackMax+10];
    rep(i, knapsackMax+1) {
        dp[0][i] = 0;
    }

    // コーヒー豆の重さと価値のペアの配列
    P coffee[n];
    rep(i, n) {
        cin >> coffee[i].first >> coffee[i].second;
    }

    // 動的計画法の主要処理 表を埋めていく
    rep(i, n) {
        rep(j, knapsackMax+1) {
            // 入るなら 試してみる。どうせ価値が小さいやつなら後から更新されるので順番通り全部やれば良い
            if (j >= coffee[i].first) {
                // 入れるパターン(dp[i][j - coffee[i].first] + coffee[i].second) この重さのコーヒー豆を入れずに今回のコーヒー豆を入れたパターン
                // と、入れないパターン(dp[i][j]) 1つ上の表の価値を使う、つまり今回のコーヒー豆の価値が低かった
                // を試してみる
                cout << "入るで" << endl;
                cout << dp[i][j - coffee[i].first] << endl;
                cout << coffee[i].second << endl;
                dp[i+1][j] = max(dp[i][j - coffee[i].first] + coffee[i].second, dp[i][j]);
            } else {
                // 入らないなら1つ上の表の価値を引き継ぐしかない
                dp[i+1][j] = dp[i][j];   
            }
            cout << dp[n+1][j] << endl;
        }
        cout << "nが " << i << " 終わり" << endl;
    }

    // 最後の選択肢の時の、重さが最大の時が一番価値が大きい
    cout << dp[n][knapsackMax] << endl;

    rep(i, n) {
        rep(j, knapsackMax+1) {
            cout << dp[i+1][j] << " ";
        }
        cout << endl;
    }

}
