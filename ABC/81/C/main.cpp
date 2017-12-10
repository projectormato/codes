#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <cmath>

#define FOR(i, f, n) for(int (i) = (f); (i) < (n); (i)++)
#define RFOR(i, f, n) for(int (i) = (f); (i) >= (n); (i)--)
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define rrep(i, n) for(int (i) = (n); (i) >= 0; (i)--)
#define step(i, f, n, a) for(int (i) = (f); (i) < (n); (i)+=a)
#define rstep(i, f, n, a) for(int (i) = (f); (i) >= (n); (i)-=a)
#define p(...) printf(__VA_ARGS__); cout << endl;
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[(n)]; for(int (i) = 0; (i) < (n); (i)++) cin >> x[i];
#define lambda(a, b, c) [](const a, const b){ return c ;}
#define key(t, x, compare) [](const t& a, const t& b){ return a x compare b x ;}

using namespace std;

using ll = long long;
using pii = pair<int, int>;

int main(){
	ll n, k, a;
	gets(n) gets(k)
	vector<ll> kind(n, 0); //可変長
	rep(i, n){
		gets(a)
		kind[a-1] += 1;
	}
	sort(kind.begin(), kind.end());

	while(true){
		if (kind[0] == 0){
			kind.erase(kind.begin());
		}else{
			break;
		}
	}

	ll del = kind.size() - k;
	if (del >= 0){
		ll result = 0, i = 0, j = 0;
		while(true){
			if (i >= del){
				break;
			}
			if (kind[j] != 0){
				result += kind[j];
				i += 1;
			}
			j += 1;
		}
		puts(result)
	}else{
		puts(0)
	}
}
