#include <bits/stdc++.h>

using namespace std;

const int MAXN = 21;

int N, sol;
int k[MAXN];
bool mk[MAXN];

bool ok(int i, int j){
    while(j && i){
        if((i % 10) + (j % 10) > 9)
            return 0;
        i /= 10;
        j /= 10;
    }

    return 1;
}

void back(int pos, int sum, int can){
    if(can > sol)
        sol = can;

    if(pos >= N || can + N - pos <= sol)
        return;

    if(ok(sum, k[pos]))
        back(pos + 1, sum + k[pos], can + 1);

    back(pos + 1, sum, can);
}

int main()
{
    //freopen("I.1", "r", stdin);
    //freopen("a.out", "w", stdout);

    cin >> N;

    for(int i = 0 ; i < N ; i++)
        cin >> k[i];

    back(0, 0, 0);

    cout << sol;

    return 0;
}
