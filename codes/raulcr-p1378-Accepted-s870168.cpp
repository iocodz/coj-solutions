///by taskkill
#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<int, int> crd;

const int MAXN = 101;

const int c[] = {-1, 1, 0};

int T, N, M;
int K[MAXN][MAXN], D[MAXN][MAXN];

inline bool ok(int & x, int & y){
    return x <= N && y <= M;
}

void bfs(){
    queue<crd> Q;

    for(int i = 1 ; i <= M ; i++){
        Q.push(crd(1, i));
        D[1][i] = K[1][i];
    }

//    for(int i = 2 ; i <= N ; i++)
//        for(int j = 1 ; j <= M ; j++){
//            if(D[i - 1][j - 1] + K[i][j] > D[i][j])
//                D[i][j] = D[i - 1][j - 1] + K[i][j];
//            if(D[i - 1][j] + K[i][j] > D[i][j])
//                D[i][j] = D[i - 1][j] + K[i][j];
//            if(D[i - 1][j + 1] + K[i][j] > D[i][j])
//                D[i][j] = D[i - 1][j + 1] + K[i][j];
//        }

    while(!Q.empty()){
        int dx = Q.front().x;
        int dy = Q.front().y;

        Q.pop();

        for(int i = 0 ; i < 3 ; i++){
            int xx = dx + 1;
            int yy = dy + c[i];

            if(ok(xx, yy) && D[xx][yy] < D[dx][dy] + K[xx][yy]){
                D[xx][yy] = D[dx][dy] + K[xx][yy];
                Q.push(crd(xx, yy));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while(T--){
        cin >> N >> M;

        for(int i = 1; i <= N ; i++)
            for(int j = 1 ; j <= M ; j++)
                cin >> K[i][j];

        bfs();

        cout << *max_element(D[N] + 1, D[N] + 1 + M) << '\n';

        for(int i = 1; i <= N ; i++)
            for(int j = 1 ; j <= M ; j++)
                D[i][j] = false;
    }
    return 0;
}
