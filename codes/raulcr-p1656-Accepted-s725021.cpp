#include <bits/stdc++.h>

using namespace std;

int N, M, sol;
bool mk[45001];

int main()
{
    cin >> N >> M;

    mk[0] = true;

    for(int i = 1 ; i <= M ; i++){
        int L;
        cin >> L;
        for(int j = N ; j >= L ; j--){
            if(mk[j - L]){
                mk[j] = true;
                sol = max(j, sol);
            }
        }
    }

    cout << sol;

    return 0;
}
