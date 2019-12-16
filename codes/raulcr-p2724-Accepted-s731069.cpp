#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
const int MAXN = 101;
bool granj[MAXN][MAXN];
bool check[MAXN][MAXN];
const int dx[] = {1, -1,  0, 0};
const int dy[] = {0,  0, -1, 1};
int N, M, K, maxim;

bool ok(int x, int y){
    return x >= 1 && x <= N && y >= 1 && y <= M && granj[x][y];
}

void bfs(int a, int b){
    queue<pii> Q;
    Q.push(make_pair(a, b));

    int kk = 1;
    check[a][b] = true;

    while(!Q.empty()){
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

        for(int i = 0 ; i < 4 ; i++){
            int xx = x + dx[i];
            int yy = y + dy[i];

            if(ok(xx, yy) && !check[xx][yy]){
                kk++;
                Q.push(make_pair(xx, yy));
                check[xx][yy] = true;
            }
        }
    }
    maxim = kk > maxim ? kk : maxim;
}

int main()
{
    cin.tie(0);

    cin >> N >> M >> K;

    for(int i = 1 ; i <= K ; i++){
        int a, b;
        cin >> a >> b;
        granj[a][b] = true;
    }

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++){
            if(granj[i][j] && !check[i][j]){
                bfs(i, j);
            }
        }

    cout << maxim;

    return 0;
}
