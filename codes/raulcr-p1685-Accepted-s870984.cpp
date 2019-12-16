///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int N, M;
map<int, int> m;
int A[MAXN];
int T[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> A[i];

    cin >> M;

    for(int i = 1 ; i <= N ; i++){
        T[i] = T[i - 1] + ((m.find(M - A[i]) != m.end()) ? m[M - A[i]] : 0);
        (m.find(A[i]) == m.end()) ? (m[A[i]] = 1) : (m[A[i]]++);
    }

    cout << T[N];

    return 0;
}
