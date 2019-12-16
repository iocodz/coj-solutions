#include <bits/stdc++.h>

using namespace std;

#define int long long
#define cik(i, a, b, c) for(int i =(a); i <=(b); i +=(c))
#define ull unsigned long long
#define bi pair<int, int>
#define f first
#define s second
#define mkp make_pair

const int maxn = 1e6 + 5;

bi A[maxn];

bool cmp(bi a, bi b){
    if(a.f == b.f) return a.s < b.s;
    return a.f > b.f;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N;

    cik(i, 1, N, 1) cin >> A[i].s >> A[i].f;

    sort(A + 1, A + N + 1, cmp);

    int Sol = 0, last = 0;
    cik(i, 1, N, 1){
        if(A[i].s < last) continue;

        Sol += A[i].f * (A[i].s - last);
        last = A[i].s;
    }cout << Sol << "\n";

    return 0;
}
