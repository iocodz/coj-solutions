#include <bits/stdc++.h>

using namespace std;

const int MAXN = 21;

int N, M;
string wds[MAXN];
vector<string> w;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++){
        cin >> wds[i];
        wds[i] = "#" + wds[i];
    }

    for(int i = 0 ; i <= M ; i++)
        wds[0] += "#";

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++){
            if(wds[i][j - 1] == '#' && wds[i][j] != '#'){
                int cop = j;
                string sp = "";

                while(cop <= M && wds[i][cop] != '#'){
                    sp += wds[i][cop];
                    cop++;
                }

                if(sp.size() >= 2)
                    w.push_back(sp);
            }

            if(wds[i - 1][j] == '#' && wds[i][j] != '#'){
                int cop = i;
                string sp = "";

                while(cop <= N && wds[cop][j] != '#'){
                    sp += wds[cop][j];
                    cop++;
                }

                if(sp.size() >= 2)
                    w.push_back(sp);
            }
        }

    sort(w.begin(), w.end());

    cout << w[0];

    return 0;
}
