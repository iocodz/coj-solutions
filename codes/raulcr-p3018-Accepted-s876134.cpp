#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<int, int> pii;

const int MAXN = 31;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int T, N, M;
char R[MAXN][MAXN];
bool mk[MAXN][MAXN];
pii in, fn;

bool ok(int xx, int yy){
    return xx >= 1 && xx <= N && yy >= 1 && yy <= M;
}

void bfs(){
    queue<pii> Q;
    Q.push(in);

    mk[in.x][in.y] = true;

    while(!Q.empty()){
        int xx = Q.front().x;
        int yy = Q.front().y;

        Q.pop();

        for(int i = 0 ; i < 4 ; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];

            if(!mk[nx][ny] && R[nx][ny] == '.' && ok(nx, ny)){
                Q.push(pii(nx, ny));
                mk[nx][ny] = true;
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

        for(int i = 1 ; i <= N ; i++)
            for(int j = 1 ; j <= M ; j++){
                cin >> R[i][j];

                if(R[i][j] == 'g')
                    in = pii(i, j);

                else if(R[i][j] == 'b'){
                    fn = pii(i, j);
                    R[i][j] = '.';
                }

                mk[i][j] = false;
            }

        bfs();

        if(mk[fn.x][fn.y])
            cout << "Good\n";
        else
            cout << "Bad\n";
    }

    return 0;
}
