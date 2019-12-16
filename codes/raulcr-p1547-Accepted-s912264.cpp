#include <bits/stdc++.h>

using namespace std;

const int MAXN = 4001;

int N;
int abcd[MAXN][4];
map<int, int> mk;

long long sol;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("four.in", "r", stdin);
    //freopen("four.out", "w", stdout);

    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        cin >> abcd[i][0];
        cin >> abcd[i][1];
        cin >> abcd[i][2];
        cin >> abcd[i][3];
    }

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= N ; j++){
            int a = abcd[i][0] + abcd[j][1];
            if(mk.find(a) != mk.end())
                mk[a]++;
            else
                mk[a] = 1;
        }

    for(int raul = 1 ; raul <= N ; raul++)
        for(int estoesunacaca = 1 ; estoesunacaca <= N ; estoesunacaca++){
            int k = abcd[raul][2] + abcd[estoesunacaca][3];
            if(mk.find(-k) != mk.end()){
                sol += mk[-k];
            }
        }

    cout << sol;

    return 0;
}
