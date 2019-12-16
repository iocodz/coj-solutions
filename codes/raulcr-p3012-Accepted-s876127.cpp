#include <bits/stdc++.h>

using namespace std;

const int MAXN = 102;

int N, M;
vector<int> S;
int K[MAXN];
bool mk[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= M ; i++)
        cin >> K[i];

    M++;
    K[M] = N;

    sort(K + 1, K + M + 1);

    for(int i = M ; i >= 1 ; i--)
        for(int j = i - 1 ; j >= 0 ; j--)
            if(!mk[K[i] - K[j]]){
                mk[K[i] - K[j]] = true;
                S.push_back(K[i] - K[j]);
            }

    sort(S.begin(), S.end());

    cout << S[0];
    for(int i = 1 ; i < S.size() ; i++)
        cout << ' ' << S[i];

    return 0;
}
