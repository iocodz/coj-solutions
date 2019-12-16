#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1e6 + 1;

int N, start, end, up, dwn;
int mk[MAXN];

int main()
{
    cin >> N >> start >> end >> up >> dwn;
    queue<pii> Q;
    Q.push(pii(start, 0));

    while(!Q.empty()){
        int piso = Q.front().first;
        int c = Q.front().second;
        Q.pop();

        if(piso == end){
            cout << mk[piso];
            return 0;
        }

        if(piso + up <= N && !mk[piso + up] || mk[piso + up] > c + 1){
            mk[piso + up] = c + 1;
            Q.push(pii(piso + up, c + 1));
        }
        if(piso - dwn >= 1 && !mk[piso - dwn] || mk[piso -dwn] > c + 1){
            mk[piso - dwn] = c + 1;
            Q.push(pii(piso - dwn, c + 1));
        }
    }

    if(mk[end])
        cout << mk[end];
    else
        cout << "use the stairs";
    return 0;
}
