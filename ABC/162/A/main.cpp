#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
    string a;
    cin >> a;
    rep(i, a.size()) {
        if (a[i] == '7'){
            cout << "Yes" << endl;
            exit(0);
        }
    }
    cout << "No" << endl;
}
