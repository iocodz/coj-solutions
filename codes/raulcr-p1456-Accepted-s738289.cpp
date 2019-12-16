#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long i64;

int N;
//set<i64> S;
vector<i64> P;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("coj.in", "r", stdin);

    cin >> N;

    i64 a;
    for(int i = 1 ; i <= N ; i++){
        cin >> a;

        P.push_back(a);
    }

    sort(P.begin(), P.end());

    for(int i = 0 ; i < P.size() - 2 ; i++){
        if(P[i] != P[i + 1] && P[i + 1] != P[i + 2]){
            cout << P[i + 1];
            return 0;
        }
    }

    if(P[P.size() - 1] != P[P.size() - 2])
        cout << P[P.size() - 1];

    return 0;
}
