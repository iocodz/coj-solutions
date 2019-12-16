#include <bits/stdc++.h>

using namespace std;

int N, M, T, s;

void solv(int a){
    if(a < 0)
        return;

    if(a <= M){
        s++;
        return;
    }

    solv(a / 2);

    solv(a / 2 + (a % 2));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        s = false;

        cin >> N >> M;

        solv(N);

        cout << s << '\n';
    }
    return 0;
}
