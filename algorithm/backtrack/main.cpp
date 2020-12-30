#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;

// sum = 12
int n, sum;

// {3, 14, 6, 9}
int num[100];

// 選択しているなら1, していないなら0
int ans[100];

void BT_subsetsum(int level) {
    // 木の最後までいったパターン
    if (level >= n) {
        int now = 0;
        rep(i, n) {
            now += ans[i] * num[i]; 
        }
        if (now == sum) {
            rep(i, n) {
                cout << ans[i] << " ";
            }
            cout << endl;
            // ここでbreakして終了
        }
    } else {
        // 入れないパターン
        ans[level] = 0;
        BT_subsetsum(level + 1);

        // 入れるパターン
        ans[level] = 1;
        BT_subsetsum(level + 1);
    }
    // 木の一番上まで到達してしまったパターン
    if (level == 0) {
        cout << "最後まできたよ" << endl;
    }
}

int main(){
    // バックトラック法の実装
    // {3, 14, 6, 9}が与えられた時、合計が12になる組み合わせはどれか

    cin >> n >> sum;
    rep(i, n) {
        cin >> num[i];
        ans[i] = 0;
    }

    BT_subsetsum(0);
}
