#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef long double ld;
typedef pair<ld, ld> pld;

const int MAXN = 105;

int N, M;
ld v, d;
pld A[MAXN];
pld H[MAXN];
bool mk[MAXN * 2];
bool mt[MAXN * 2][MAXN * 2];
int ft[MAXN * 2];

bool ok(){

    fill(ft, ft + MAXN * 2, -1);
    fill(mk, mk + MAXN * 2, 0);

    queue<int> Q;
    Q.push(0);
    mk[0] = true;

    while(!Q.empty()){
        int nod = Q.front();
        Q.pop();

        if(nod == N + M + 1)
            break;

        for(int i = 0 ; i <= N + M + 1 ; i++){
            if(!mk[i] && mt[nod][i]){
                mk[i] = true;
                ft[i] = nod;
                Q.push(i);
            }
        }
    }

    if(ft[N + M + 1] < 1)
        return false;

    int nod = N + M + 1;
    while(ft[nod] != -1){
        mt[ft[nod]][nod] -= 1;
        mt[nod][ft[nod]] += 1;
        nod = ft[nod];
    }

    return 1;
}

ld dis(int i, int j){
    ld a = A[i].x - H[j].x;
    ld b = A[i].y - H[j].y;

    a *= a;
    b *= b;

    return sqrtl(a + b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("001.in", "r", stdin);
//    freopen("001s.in", "w", stdout);

    while(cin >> N >> M >> d >> v){

//        memset(mt, 0, sizeof mt);

        for(int i = 0 ; i <= N + M + 1 ; i++)
            for(int j = 0 ; j <= N + M + 1 ; j++)
                mt[i][j] = 0;

        for(int i = 1 ; i <= N ; i++)
            cin >> A[i].x >> A[i].y;

        for(int i = 1 ; i <= M ; i++)
            cin >> H[i].x >> H[i].y;

        for(int i = 1 ; i <= N ; i++){
            for(int j = 1 ; j <= M ; j++){
                ld ds = dis(i, j);
                if(ds / v < d)
                    mt[i][N + j] = true;
            }
        }

        for(int i = 1 ; i <= M ; i++)
            mt[N + i][N + M + 1] = 1;

        for(int i = 1 ; i <= N ; i++)
            mt[0][i] = 1;

        int sol = 0;

        while(ok())
            sol++;

        cout << N - sol << '\n';
    }
    return 0;
}
/*
3 3 100 100
1.0 1.0
2.0 2.0
3.0 3.0
20.0 20.0
30.0 30.0
40.0 40.0
*/
