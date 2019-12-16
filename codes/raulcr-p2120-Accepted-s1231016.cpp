#include <bits/stdc++.h>

using namespace std;

bool ok(int a){
    set<int> mk;
    while(a > 0){
        int k = a % 10;
        if(mk.find(k) != mk.end())
            return 0;
        mk.insert(k);
        a /= 10;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    while(cin >> N >> M){
        int sol = 0;
        for(int i = N ; i <= M ; i++){
            if(ok(i))sol++;
        }

        cout << sol << '\n';
    }
    return 0;
}