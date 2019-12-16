#include <bits/stdc++.h>

using namespace std;

#define int long long
#define cik(i, a, b, c) for(int i =(a); i <=(b); i +=(c))
#define ull unsigned long long
#define bi pair<int, int>
#define f first
#define s second
#define mkp make_pair

const int maxn = 1e5 + 5;

map<int, int> M;

void precalc(){
    for(int i = 2; i * i <= 1e9; i ++)
        M[i * (i - 1) / 2 * 9] = i;
    return;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

//    freopen(".in", "r", stdin);
//    freopen(".out", "w", stdout);

    precalc();

    int a; while(cin >> a && a != 0){
        if(M.find(a) != M.end()) cout << M[a] << "\n";
        else cout << "impossible\n";
    }

    return 0;
}
