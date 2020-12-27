#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;

int main(){
    // コーヒー豆を5kgのナップサックに一番価値が大きくなるように入れていく。
    // コーヒー豆は1g単位に分けて入れることが出来る

    // ナップサックの大きさ
    int max = 5;

    // 与えられるコーヒー豆の種類
    int n;
    cin >> n;

    // 選んだコーヒー豆の配列 1なら全部
    double ans[n];
    rep(i, n) {
        ans[i] = 0;
    }

    // コーヒー豆の重さと価値のペアの配列
    P coffee[n];
    rep(i, n) {
        cin >> coffee[i].first >> coffee[i].second;
    }

    // コーヒー豆のグラムあたりの価値を持ったvector
    vector<P> valueVector{};

    rep(i, n) {
        int valueParGram = coffee[i].second / coffee[i].first;
        valueVector.push_back(make_pair(valueParGram, i));
    }
    sort(valueVector.begin(), valueVector.end(), greater<P>());

    // 今までナップサックに入れた重さ
    int sum = 0;
    forEntry(valueVector) {
        if (coffee[entry.second].first <= max - sum) {
            ans[entry.second] = 1;
            sum += coffee[entry.second].first;
        } else {
            ans[entry.second] = (double)(max - sum) / coffee[entry.second].first;
            break;
        }
    }

    rep(i, n) {
        cout << ans[i] << endl;
    }

}
