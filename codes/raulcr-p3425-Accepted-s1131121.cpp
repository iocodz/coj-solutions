#include <bits/stdc++.h>

using namespace std;

#define cik(i, a, b, c) for(int i =(a); i <=(b); i +=(c))

map<string, int> M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T;

    cik(t, 1, T, 1){
        int N; cin >> N;

        cik(i, 1, N, 1){
            string A; cin >> A >> A;

            if(M.find(A) == M.end()){
                M[A] = 1;
            }
            else{
                M[A]++;
            }
        }

        map<string, int>::iterator it = M.begin();

        int Sol = 1;
        for( ; it != M.end(); it++){
            Sol *= ((it -> second) + 1);
        }

        cout << Sol - 1 << "\n";
        M.clear();
    }

    return 0;
}