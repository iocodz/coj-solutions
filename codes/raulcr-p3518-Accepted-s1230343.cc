//By Forte11
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define cik(i, a, b, c) for(int i =(a); i <=(b); i +=(c))
#define ull unsigned long long
#define bi pair<int, int>
#define f first
#define s second
#define mkp make_pair

const int maxn = 2e8;

set<int> A;

void genera(int n){
    if(n > maxn) return;
    if(n) A.insert(n);

    n *= 10;

    genera(n + 1);
    genera(n + 2);

    return;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    genera(0);

    int N; cin >> N;

    cik(i, 1, N, 1){
        int a; cin >> a;

        if(A.find(a) != A.end()) cout << a << "\n";
        else{
            A.insert(a);
            set<int> :: iterator it = A.find(a);
            it++;
            cout << *it << "\n";

            A.erase(A.find(a));
        }
    }

    return 0;
}
