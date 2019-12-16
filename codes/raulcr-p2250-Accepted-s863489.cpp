#include <bits/stdc++.h>

using namespace std;

#define m_l (int)K.size()
#define n_l (int)M.size()

const int MAXN = 1e6 + 1;

int N, sol;
string M, K;
int b[MAXN];

void KmpP(){
    int i = 0, j = -1;
    b[0] = -1;
    while(i < m_l){
        while(j >= 0 && K[i] != K[j])
            j = b[j];
        i++;
        j++;
        b[i] = j;
    }
}

void KmpS(){
    int i = 0, j = 0;

    while(i < n_l){
        while(j >= 0 && M[i] != K[j])
            j = b[j];
        i++;
        j++;
        if(j == m_l){
            sol++;
            j = b[j];
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> M >> K;

        fill(b, b + MAXN, 0);

        KmpP();
        KmpS();

        cout << "Case " << i << ": " << sol << '\n';
        sol = 0;
    }
    return 0;
}
