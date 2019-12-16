///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 51;

int N;
int A[MAXN];

char dfs(int k, int n){
    if(n <= A[k - 1])
        return dfs(k - 1, n);

    if(n >= A[k] - A[k - 1] + 1 && n <= A[k])
        return dfs(k - 1, n - A[k] + A[k - 1]);

    if(n == A[k - 1] + 1)
        return 'm';

    return 'o';
}

int main()
{
//    freopen("moo.in", "r", stdin);
//    freopen("moo.out", "w", stdout);

    cin >> N;

    int k = 1;
    A[0] = 3;

    for(int i = 1 ; ; i++){
        int v = A[i - 1] * 2 + i + 3;

        if(A[i - 1] > N)
            break;

        A[i] = v;
        k = i;
    }

    cout << dfs(k, N);

    return 0;
}
