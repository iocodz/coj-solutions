#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 101;

const int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};

int N, M;
bool m[MAXN][MAXN], mk[MAXN][MAXN];

bool ok(int x, int y){
    return x>= 1 && x <= N && y >= 1 && y <= M;
}

void bfs(int a, int b){
    queue<pii> q;
    q.push(pii(a, b));
    mk[a][b] = 1;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0 ; i < 8 ; i++){
            int xx = dx[i] + x;
            int yy = dy[i] + y;

            if(ok(xx, yy) && m[xx][yy] && !mk[xx][yy]){
                mk[xx][yy] = true;
                q.push(pii(xx, yy));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= M ; j++){
            char a;
            cin >> a;
            if(a == '#') m[i][j] = 1;
        }
    }
    int sol = 0;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++){
            if(m[i][j] && !mk[i][j]){
                sol++;
                bfs(i, j);
            }
        }
    cout << sol;
    return 0;

}

