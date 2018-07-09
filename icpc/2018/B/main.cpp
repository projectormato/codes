#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long

int main(){
  int N, M, T, P;
  while (true) {
    cin >> N >> M >> T >> P;
    if (N == 0 && M == 0 && T == 0 && P == 0) {
      break;
    }
    int pe[M][N];
    rep(i, M){
      rep(j, N){
        pe[i][j] = 1;
      }
    }
    int d[T], c[T], x[P], y[P];
    rep(i, T){
      cin >> d[i] >> c[i];
    }
    rep(i, P){
      cin >> x[i] >> y[i];
    }

    // //out
    // rep(i, M){
    //   rep(j, N){
    //     cout << pe[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // rep(i, T){
    //   cout << d[i] << " " << c[i];
    // }
    // cout << endl;
    // rep(i, P){
    //   cout << x[i] << " " << y[i];
    // }
    int start=0, orime;
    rep(i, T){
      if (d[i] == 1) { //幅、N
        rep(j, N){
          if (pe[0][j] != 0) {
            start =j;
            break;
          }
        }
        orime = start+c[i];
        if (c[i] > (M-start)/2) { //半分
          //tmpに保存
          int tmp[M][N];
          rep(i0, M){
            rep(j0, N){
              tmp[i0][j0] = pe[i0][j0];
            }
          }
          FOR(i0,start,N){
            rep(j0,M){
              pe[j0][i0] = tmp[j0][N-1-i0];
            }
          }


          c[i] = (N-start)-c[i];
          orime = start+c[i];
          // orime = start + (N-start)-c[i];
          // cout << orime << endl;

        }

        FOR(j, 0, c[i]+1){
          FOR(k, 0, M){
              pe[k][orime+j-1] += pe[k][orime-j];
              pe[k][orime-j] = 0;
          }
        }
        // rep(i, M){
        //   rep(j, N){
        //     cout << pe[i][j] << " ";
        //   }
        //   cout << endl;
        // }

      }else{


        for (int j = M;  j> 0; j--) {

          if (pe[j][N] != 0) {
            start =j;
            break;
          }
        }

        if (c[i] > (M-start)/2) { //半分
          //tmpに保存
          int tmp[M][N];
          rep(i0, M){
            rep(j0, N){
              tmp[i0][j0] = pe[i0][j0];
            }
          }
          FOR(i0,start,M){
            rep(j0,M){
              pe[j0][i0] = tmp[M-1-j0][i0];
            }
          }


          c[i] = (M-start)-c[i]; //-1kamo
          orime = start+c[i];
          // orime = start + (N-start)-c[i];
          // cout << orime << endl;

        }



        orime = start -c[i]- 1  /*配列だから！*/;
        FOR(j, 0, c[i]){
          for (int k = N-1;  k>= 0; k--) {
            // cout << start-c[i]-j << " " << orime+j+1 << endl;
            // cout << k <<endl;
              pe[orime-j][k] += pe[orime+j+1][k];
              pe[orime+j+1][k] = 0;
          }
          // cout << "---" <<endl;

        }




      }
    }

    // cout << start << " " << orime << endl;
    // rep(i, M){
    //   rep(j, N){
    //     cout << pe[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    //原点見つける
    int ox,oy;
    rep(j, N){
      if (pe[0][j] != 0) {
        ox =j;
        break;
      }
    }

    for (int j = M;  j> 0; j--) {
      if (pe[j][N] != 0){
        oy = j-1; //違う
        break;
      }
    }


    ll ans = 0;
    int ax,ay; //Ana
    rep(i, P){
      ax = ox + x[i];
      ay = oy-y[i]-1;
      cout << pe[ay][ax] << endl;
      // cout << ax << " " << ay << " " << pe[ay][ax] <<endl;
    }
  }
}
