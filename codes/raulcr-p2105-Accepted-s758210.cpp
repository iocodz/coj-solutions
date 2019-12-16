#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1001;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0,  0, 1, -1};

int sol;
int N, M;
bool mt[MAXN][MAXN];
bool mk[MAXN][MAXN];

bool ok(int x, int y){
    return x >= 1 && x <= N && y >= 1 && y <= M;
}

bool contar(int x, int y){
    for(int i = 0 ; i < 4 ; i++)
        if(!mt[x + dx[i]][y + dy[i]])
            return true;

    return false;
}

void bfs(int x, int y){
    mk[x][y] = true;

    queue<pii> Q;
    Q.push(pii(x, y));

    while(!Q.empty()){
        int f = Q.front().first;
        int c = Q.front().second;

        Q.pop();

        for(int i = 0 ; i < 4 ; i++){
            int xx = dx[i] + f;
            int yy = dy[i] + c;

            if(!mk[xx][yy] && mt[xx][yy] && ok(xx, yy)){
                mk[xx][yy] = true;
                Q.push(pii(xx, yy));
                if(contar(xx, yy))
                    sol++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++){
            char x;
            cin >> x;

            if(x == '+')
                mt[i][j] = 1;
        }

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++)
            if(mt[i][j] && !mk[i][j])
                bfs(i, j);

    cout << sol + 1;
    return 0;
}
