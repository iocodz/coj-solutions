#include <bits/stdc++.h>

using namespace std;

int N, A;
vector<int> P5;

void precalc(){
    for(int i = 5 ; i < 1e7 ; i *= 5)
        P5.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    precalc();

    cin >> N;

    while(N--){
        cin >> A;

        int i = 0;
        int sol = 0;

        while(P5[i] <= A && i < P5.size()){
            sol += (A / P5[i]);
            i++;
        }

        cout << sol << '\n';
    }
    return 0;
}
