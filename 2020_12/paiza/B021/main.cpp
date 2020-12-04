#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

// ・末尾が s, sh, ch, o, x のいずれかである英単語の末尾に es を付ける
// ・末尾が f, fe のいずれかである英単語の末尾の f, fe を除き、末尾に ves を付ける
// ・末尾の1文字が y で、末尾から2文字目が a, i, u, e, o のいずれでもない英単語の末尾の y を除き、末尾に ies を付ける
// ・上のいずれの条件にも当てはまらない英単語の末尾には s を付ける

int main(){
  int n;
  cin >> n;
  string s[n];
  rep(i, n) {
    cin >> s[i];
  }
  rep(i, n) {
    char last = s[i][s[i].size()-1];
    char last2 = s[i][s[i].size()-2];
    if (last == 's' || last == 'o' || last == 'x' || (last2 == 's' && last == 'h') || (last2 == 'c' && last == 'h')) {
      cout << s[i] + "es" << '\n';
      continue;
    }
    if (last == 'f') {
      cout << s[i].substr(0, s[i].size()-1) + "ves" << '\n';
      continue;
    }
    if (last2 == 'f' && last == 'e') {
      cout << s[i].substr(0, s[i].size()-2) + "ves" << '\n';
      continue;
    }
    if (last == 'y' && (last2 != 'a' && last2 != 'i' && last2 != 'u' && last2 != 'e' && last2 != 'o')) {
      cout << s[i].substr(0, s[i].size()-1) + "ies" << '\n';
      continue;
    }
    cout << s[i] + 's' << '\n';
  }
}
