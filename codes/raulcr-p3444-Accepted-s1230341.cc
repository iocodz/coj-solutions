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

void K(int L){
    cout << "+";
    cik(i, 1, L + 2, 1) cout << "-";
    cout << "+\n";
    return;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

//    freopen(".in", "r", stdin);
//    freopen(".out", "w", stdout);

    string A;
    while(getline(cin, A)){
        if(A == "END") break;
        int L = A.size();
        K(L);
        cout << "| " << A << " |\n";
        K(L); cout << "\n";
    }

    return 0;
}
