#include <bits/stdc++.h>

using namespace std;

#define int long long
#define cik(i, a, b, c) for(int i =(a); i <=(b); i +=(c))
#define ull unsigned long long
#define bi pair<int, int>
#define f first
#define s second
#define mkp make_pair

const int maxn = 25;

string A[maxn];


main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    A[1] = "un";
    A[2] = "deux";
    A[3] = "trois";
    A[4] = "quatre";
    A[5] = "cinq";
    A[6] = "six";
    A[7] = "sept";
    A[8] = "huit";
    A[9] = "neuf";
    A[10] = "dix";
    A[11] = "onze";
    A[12] = "douze";
    A[13] = "treize";
    A[14] = "quatorze";
    A[15] = "quinze";
    A[16] = "seize";
    A[17] = "dix-sept";
    A[18] = "dix-huit";
    A[19] = "dix-neuf";
    A[20] = "vingt";

    int N; cin >> N;

    cik(i, 1, N, 1){
        int a; cin >> a;
        cout << A[a] << "\n";
    }
    return 0;
}
