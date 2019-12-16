#include <bits/stdc++.h>

using namespace std;

int T, N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T--){
        string a;
        cin >> N >> a >> M;
        int sol = 0;
        if(a == "odd"){
            for(int i = 2 ; i <= N ; i += 2)
                if(i / 2 == M){
                    sol = i;
                    break;
                }
        }
        else {
            for(int i = 1 ; i <= N ; i += 2)
                if((1 + i) / 2 == M){
                    sol = i;
                    break;
                }
        }

        cout << sol << '\n';
    }

    return 0;
}