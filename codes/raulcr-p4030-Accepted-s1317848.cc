#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    while(N--){
        int a, b; cin >> a >> b;

        int sol = a / b / 2;

        if(!sol) cout << "Majpy is to short!\n";
        else if(sol == 1) cout << "Majpy do it 1 time!\n";
        else cout << "Majpy do it " << sol << " times!\n";
    }
    return 0;
}
