#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, k;
    cin >> k;

    while(k--){
        cin >> M >> N;

        int sol = (M / N) / 2;
        if(sol == 0)
            cout << "Majpy is to short!\n";
        else if(sol == 1)cout << "Majpy do it 1 time!\n";
        else cout << "Majpy do it " << sol << " times!\n";

    }


    return 0;
}
