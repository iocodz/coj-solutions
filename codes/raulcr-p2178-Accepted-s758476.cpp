#include <bits/stdc++.h>

using namespace std;

#define mx(a, b) ((a) > (b) ? (a) : (b))

const int MAXN = 51;
const int MAXM = MAXN * MAXN;

int mp;
int N;
bool mk[MAXM];
int A[MAXN];

int main()
{
    cin >> N;

    mk[0] = true;

    for(int i = 1 ; i <= N ; i++){
        cin >> A[i];
        mp += A[i];
    }

    sort(A + 1, A + 1 + N);

    for(int i = 1 ; i <= N ; i++)
        for(int j = A[i] ; j <= mp ; j++)
            if(mk[j - A[i]])
                mk[j] = true;

    int sol = 0;

    for(int i = 1 ; i <= mp ; i += 2)
        if(mk[i])
            sol = i;

    if(!sol)
        sol = -1;

    cout << sol;
    return 0;
}
