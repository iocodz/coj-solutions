#include <bits/stdc++.h>

using namespace std;

const int MAXN = 32;

bitset<MAXN> M;
string S;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;
    cout << S << '\n';

    int a = count(S.begin(), S.end(), '1');

    while(a > 1){
        M = a;
        S = M.to_string();
        for(int i = 0 ; i < S.size() ; i++){
            if(S[i] == '1'){
                S = S.substr(i);
                break;
            }
        }
        cout << S << '\n';
        a = M.count();
    }

    return 0;
}
