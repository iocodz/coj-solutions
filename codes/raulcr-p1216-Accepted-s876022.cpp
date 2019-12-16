///by taskkill
#include <bits/stdc++.h>

using namespace std;

int T, N, s, sol;
map<int, int> M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N;

        s = sol = 0;
        M[0] = 1;

        int a;
        for(int i = 1 ; i <= N ; i++){
            cin >> a;

            s += a;
            if(M.find(s) != M.end())
                M[s]++;
            else
                M[s] = 1;

            if(M.find(s - 47) != M.end())
                sol += M[s - 47];
        }

        cout << sol << '\n';

        M.clear();
    }
    return 0;
}
