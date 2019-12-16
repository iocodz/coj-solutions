#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> tr;
const int MAXN = 101;

const int dx[] = {0, 1, -1,  0, 1, -1, -1,  1};
const int dy[] = {1, 0,  0, -1, 1, -1,  1, -1};

int N;
int M[MAXN][MAXN];

bool mk[MAXN][MAXN];

bool ok(int x, int y){
    return x >= 1 && x <= N && y >= 1 && y <= N;
}

int bfs(int a, int b){
    queue<pii> Q;
    Q.push(make_pair(a, b));
    mk[a][b] = 1;

    int c1 = 0;

    while(!Q.empty()){
        int x = Q.front().first;
        int y = Q.front().second;

        Q.pop();

        c1++;

        for(int i = 0 ; i < 8 ; i++){
            int xx = x + dx[i];
            int yy = y + dy[i];

            if(ok(xx, yy) && !mk[xx][yy] && M[xx][yy] != -1){
                Q.push(make_pair(xx, yy));
                mk[xx][yy] = 1;
            }
        }
    }
    //cout << c1 << ' ';
    return c1;
}

int main()
{
    while(cin >> N){
        if(N == 0)
            break;

        int minn = 1e6;
        int maxx = 0;
        int ci = 0;

        for(int i = 1 ; i <= N ; i++)
            for(int j = 1 ; j <= N ; j++){
                char x;
                cin >> x;

                if(x == 's')
                    M[i][j] = -1;
            }

        for(int i = 1 ; i <= N ; i++)
            for(int j = 1 ; j <= N ; j++){
                if(!mk[i][j] && M[i][j] == 0){
                    int k = bfs(i, j);
                    ci++;

                    if(minn > k)
                        minn = k;
                    if(maxx < k)
                        maxx = k;
//                    minn = min(minn, k);
//                    maxx = max(maxx, k);
                }
            }

        if(minn == 1e6)
            minn = 0;

        cout << ci << " " << minn << " " << maxx << '\n';
        memset(mk, 0, sizeof(mk));
        memset(M, 0, sizeof(M));
    }

    return 0;
}
