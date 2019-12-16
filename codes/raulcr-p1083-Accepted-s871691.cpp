#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int N, M, K;
bool mk[MAXN];
int A[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> M >> K >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> A[i];

    mk[M] = mk[K] = mk[1] = true;
    for(int i = 2 ; i < MAXN ; i++){
        if(i > M && !mk[i - M])
            mk[i] = true;
        if(!mk[i - 1])
            mk[i] = true;
        if(i > K && !mk[i - K])
            mk[i] = true;
    }

    for(int i = 1 ; i <= N ; i++){
        if(mk[A[i]])
            cout << 'A';
        else
            cout << 'B';
    }

    return 0;
}
