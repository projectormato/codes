#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;

// ナップサック問題をバックトラック法の枝刈りを使って解いてみる

// ナップサックの大きさ
int knapsackMax = 10;

// 与えられる入力の種類
int n;

// 入力の重さと価値を持った配列
P input[4];

// 選択しているなら1, していないなら0
int ans[100];
// 正解の時の価値
int ansValue = 0;

void BB_knapsack(int level) {
    int nowWeight = 0;
    int nowValue = 0;
    rep(i, n) {
        nowWeight += ans[i] * input[i].first; 
        nowValue += ans[i] * input[i].second; 
    }
    // 木の最後までいったパターン
    if (level >= n-1) {
        // 容量内で価値が大きいなら
        if (nowWeight <= knapsackMax && nowValue > ansValue) {
            ansValue = nowValue;
            cout << "正解候補やで" << endl;
            cout << "価値は " << ansValue << "重さは " << nowWeight << endl;
            rep(i, n) {
                cout << ans[i] << " ";
                ans[i] = 0;
            }
            cout << endl;
        }
    } else {
        // まだ入るパターン、入らないなら終わりにする
        cout << nowWeight << " " << nowValue << endl;
        if (nowWeight <= knapsackMax) {
            // 容量ぴったりならもう入らないので終わりにする
            if (nowWeight == knapsackMax) {
                if (nowValue > ansValue) {
                    ansValue = nowValue;
                    cout << "正解候補やで(ぴったり)" << endl;
                    cout << "価値は " << ansValue << endl;
                    rep(i, n) {
                        cout << ans[i] << " ";
                    }
                    cout << endl;
                }
            } else {
                // 入れないパターン
                ans[level] = 0;
                BB_knapsack(level + 1);

                // 入れるパターン
                ans[level] = 1;
                BB_knapsack(level + 1);
            }
        }
    }
    // 木の一番上まで到達してしまったパターン
    if (level == 0) {
        cout << "最後まできたよ" << endl;
    }
}

int main(){
    cin >> n;
    rep(i, n) {
        cin >> input[i].first >> input[i].second;
        ans[i] = 0;
    }

    BB_knapsack(0);
}
