#include <bits/stdc++.h>

using namespace std;

#define int long long
#define cik(i, a, b, c) for(int i =(a); i <=(b); i +=(c))
#define ull unsigned long long
#define bi pair<int, int>
#define f first
#define s second
#define mkp make_pair

const int maxn = 5e7 + 5;

int A[maxn];

void criba(){
    A[1] = true;

    cik(i, 4, maxn - 5, 2) A[i] = true;

    for(int i = 3; i * i < maxn; i += 2){
        if(!A[i])
            for(int j = 3 * i; j < maxn; j += 2 * i){
                A[j] = true;
            }
    }
    return;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    criba();

    cik(i, 1, maxn - 5, 1)
        A[i] += A[i - 1];

    int N; cin >> N;

    cik(i, 1, N, 1){
        int a, b; cin >> a >> b;
        cout << "Test Case #" << i << ": " <<b - a -( A[b] - A[a - 1] ) + 1<< "\n";
    }

    return 0;
}
