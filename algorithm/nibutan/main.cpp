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
int main(){
    int ans;
    cin >> ans;
    int high = 100;
    int row = 0;
    int mid = 0;
    rep(i, sqrt(high)) {
        mid = (row + high) /2;
        cout << mid << endl;
        if (mid == ans) {
            cout << "正解は: " <<  mid << ", 試行回数は: " << i << endl;
            break;
        } else if(mid < ans) {
            row = mid;
        } else {
            high = mid;
        }
    }
}
