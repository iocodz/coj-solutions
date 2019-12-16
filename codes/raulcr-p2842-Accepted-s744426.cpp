#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e7 + 1;

int N;
bool P[MAXN];
vector<int> sol;

bool pal(int K){
    int c = K;
    int m = 0;

    while(c > 0){
        m = (m * 10) + (c % 10);
        c /= 10;
    }
    if(m == K)
        return 1;
    return 0;
}

void criba(){
    P[0] = P[1] = true;
    for(int i = 4 ; i < MAXN ; i += 2)
        P[i] = true;

    for(int i = 3 ; i * i < MAXN ; i += 2)
        if(!P[i])
            for(int j = i * i ; j < MAXN ; j += 2 * i)
                P[j] = true;

    for(int i = 2 ; i < MAXN ; i++)
        if(!P[i] && pal(i))
            sol.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

//    freopen("gato.in", "r", stdin);
//    freopen("gato.out", "w", stdout);

    criba();

    cin >> N;

    while(N--){
        int a, b;
        cin >> a >> b;

        int a1 = lower_bound(sol.begin(), sol.end(), a) - sol.begin();
        int a2 = upper_bound(sol.begin(), sol.end(), b) - sol.begin();

        cout << a2 - a1 << '\n';

    }

    return 0;
}
