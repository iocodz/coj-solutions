///by taskkill
#include <bits/stdc++.h>

using namespace std;

int N, sol;
string nex;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    sol = N;

    while(N--){
        cin >> nex;

        for(int i = 1 ; i < nex.size() ; i++)
            if(nex[i] == 'D' && nex[i - 1] == 'C'){
                sol--;
                break;
            }
    }

    cout << sol;
    return 0;
}
