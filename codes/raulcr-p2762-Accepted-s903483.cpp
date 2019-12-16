#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int N;
char mh[MAXN][MAXN];
int mc[MAXN][MAXN];
bitset<MAXN> mk[MAXN], mk2[MAXN];

void dfs1(int i, int j){
    if(mk[i][j])
        return;
    mk[i][j] = true;

    for(int k = 0 ; k < 4 ; k++){
        int x = i + dx[k];
        int y = j + dy[k];

        if(mk[x][y] || x > N || y > N || x < 1 || y < 1)
            continue;

        if(mh[x][y] == mh[i][j])
            dfs1(x, y);
    }
}

void dfs2(int i, int j){
    if(mk2[i][j])
        return;
    mk2[i][j] = true;

    for(int k = 0 ; k < 4 ; k++){
        int x = i + dx[k];
        int y = j + dy[k];

        if(mk2[x][y] || x > N || y > N || x < 1 || y < 1)
            continue;

        if(mc[x][y] == mc[i][j])
            dfs2(x, y);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= N ; j++){
            cin >> mh[i][j];
            if(mh[i][j] == 'B')
                mc[i][j] = 1;
            else
                mc[i][j] = 2;
        }

    int s1, s2; s1 = s2 = 0;

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= N ; j++){
            if(!mk[i][j]){
                dfs1(i, j);
                s1++;
            }
            if(!mk2[i][j]){
                dfs2(i, j);
                s2++;
            }
        }

    cout << s1 << ' ' << s2;

    return 0;
}
