///by r@uli.
#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

typedef pair<int, int> pai;

const int MAXN = 9;
const int dx[] = { 2, -1,  1, -1, 1, 2, -2, -2};
const int dy[] = {-1, -2, -2,  2, 2, 1,  1, -1};
int C[MAXN][MAXN];

bool ok(int x, int y){
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

int bfs(pai i, pai f){
    queue<pai> K;
    for (int i = 1 ; i <= 8 ; i++)
        for (int j = 1 ; j <= 8 ; j++)
            C[i][j] = -1;

    K.push(i);

    while(!K.empty()){
        pai m = K.front();
        K.pop();

        if (m == f)
            return C[m.first][m.second] + 1;

        for (int i = 0 ; i < 9 ; i++){
            int xx = dx[i] + m.first;
            int yy = dy[i] + m.second;

            if(ok(xx, yy) && C[xx][yy] == -1){
                C[xx][yy] = C[m.first][m.second] + 1;
                K.push(make_pair(xx, yy));
            }
        }
    }
    return 0;
}

int main()
{
    pai i, f;
    string a, b;
    while(cin >> a >> b && a != "##"){
        i = make_pair(a[0] - 96, a[1] - '0');
        f = make_pair(b[0] - 96, b[1] - '0');
        cout << "To get from " << a << " to " << b << " takes " << bfs(i, f) << " knight moves.\n";
    }
    return 0;
}
