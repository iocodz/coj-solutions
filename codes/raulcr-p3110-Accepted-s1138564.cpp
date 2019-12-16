#include <bits/stdc++.h>

using namespace std;

#define cik(i, a, b, c) for(int i =(a); i <=(b); i+=(c))
#define bi pair<int, int>
#define f first
#define s second
#define mkp make_pair

const string S[] = {"77", "3", "17", "77"};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);

    int N;
    cin >> N;

    if(N <= 3){
        cout << S[N] << "\n";
        return 0;
    }

    int R = N;
    while(R % 3){
        R++;
    }

    R = R / 3 * 2 - 2;

    string sol = "";
    cik(i, 1, R, 1){
        sol += "7";
    }

    cout << S[N % 3] + sol << "\n";

    return 0;
}