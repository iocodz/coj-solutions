#include <bits/stdc++.h>

using namespace std;

const int MAXN = 51;

int N, M, ta[MAXN][MAXN], c0;
bool fl[MAXN][MAXN];

int main()
{
    cin >> N >> M;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++){
            char a;
            cin >> a;
            if(a == '.'){
                fl[i][j] = 0;
            }
            else{
                fl[i][j] = 1;
                c0++;
            }
        }

    if(c0 == 1){
        cout << "YES\n";
    }

    else{
        for(int i = 1 ; i <= N ; i++)
            for(int j = 1 ; j <= M ; j++){
                if(fl[i][j]){
                    for(int l = min(N, M) ; l >= 0 ; l--){
                        int sp = 0;
                        bool ok = 1;
                        for(int ii = 0 ; ii < l ; ii++){
                            for(int jj = 0 ; jj < l ; jj++){
//                                if(i + ii > N || jj + j > M)
//                                    continue;
                                if(fl[i + ii][j + jj] == 0){
                                    ok = 0;
                                    break;
                                }
                                sp += fl[i + ii][j + jj];
                            }
                        }
    //                    cout << ok << ' ' << l << ' ' << sp << ' ' << l * l << ' ' << c0 << '\n';
                        if(ok == 1 && sp == c0 && l * l == sp){
                            cout << "YES\n";
                            return 0;
                        }
                    }
                }
            }

        cout << "NO\n";
    }
    return 0;
}
/*
3 4
***.
*.**
***.
*/
