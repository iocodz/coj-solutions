#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<int, int> coor;
typedef pair<coor, int> coord;

const int MAXN = 9;

const int dx[] = {0, 0, 1, 1, -1, -1, 1, -1};
const int dy[] = {1, -1, 1, -1, -1, 1, 0, 0};

char mt[MAXN][MAXN];
vector<coor> queens;

bool ok(int xx, int yy){
    if(xx < 1 || xx > 8)
        return 0;

    if(yy < 1 || yy > 8)
        return 0;

    return 1;
}

bool bfs(coor & p){
    queue<coord> Q;
    for(int i = 0 ; i < MAXN - 1 ; i++)
        Q.push(coord(coor(p.x + dx[i], p.y + dy[i]), i));

    while(!Q.empty()){
        coord fr = Q.front();
        Q.pop();

        int x = fr.x.x;
        int y = fr.x.y;
        int i = fr.y;

        if(!ok(x, y))
            continue;

        if(mt[x][y] == '*')
            return 0;

        int xx = x + dx[i];
        int yy = y + dy[i];

        while(1){
            if(!ok(xx, yy))
                break;

            if(mt[xx][yy] == '*')
                return 0;

            xx = xx + dx[i];
            yy = yy + dy[i];
        }
    }
    return 1;
}

int main()
{
    for(int i = 1 ; i < MAXN ; i++)
        for(int j = 1 ; j < MAXN ; j++){
            cin >> mt[i][j];

            if(mt[i][j] == '*')
                queens.push_back(coor(i, j));
        }

    if(queens.size() != 8){
        cout << "invalid";
        return 0;
    }


    for(int i = 0 ; i < queens.size() ; i++){
        if(!bfs(queens[i])){
            cout << "invalid";
            return 0;
        }
    }

    cout << "valid";

    return 0;
}
