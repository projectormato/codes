#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define forEntry(entries) for(auto entry : entries)
#define ll long long
typedef pair<int, int> P;
typedef map<int,int> M;

int H, W, goalX, goalY;
string maze[501];
bool checked[501][501];

int main(){
    stack<P> st;    
    cin >> H >> W;
    rep(i, H){
        cin >> maze[i];
    }

    rep(i, H){
        rep(j, W){
            if (maze[i][j] == 'g') {
                goalX = j;
                goalY = i;
            }
            if (maze[i][j] == 's') {
                st.push({j, i});
            }
        }  
    }

    // st.push({1, 1});
    // cout << !st.empty() << endl;
    while(!st.empty()) {
        P target = st.top(); st.pop();
        int x = target.first;
        int y = target.second;
        if (x < 0 || y < 0 || W <= x || H <= y || maze[y][x] == '#' || checked[y][x]) {
            continue;
        }
        checked[y][x] = true;
        st.push({x-1, y});
        st.push({x+1, y});
        st.push({x, y-1});
        st.push({x, y+1});
    }
    // rep(i, H) {
    //     rep(j, W) {
    //         cout << checked[i][j];
    //     }
    //     cout << endl;
    // }
    string ans = checked[goalY][goalX] ? "Yes" : "No";
    cout << ans << endl;
}
