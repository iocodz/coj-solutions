#include <bits/stdc++.h>

using namespace std;

const int MAXN = 500505;

int N, M, ta[MAXN];
bool mk[MAXN];

void criba(){
    mk[0] = true;
    mk[1] = true;
    for(int i = 4 ; i < MAXN ; i+=2)
        mk[i] = true;
    for(int i = 3 ; i < MAXN ; i+=2){
        if(!mk[i])
            for(int j = 2 * i ; j < MAXN ; j += i)
                mk[j] = true;
    }
}

void solve(){
    criba();
    for(int i = 1 ; i < MAXN ; i++){
        ta[i] = ta[i - 1];
        if(!mk[i])
            ta[i] += i;
    }

    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        cin >> M;
        int lnumber = M * (M + 1) / 2;
        cout << ta[lnumber] - ta[lnumber - M] << '\n';
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    //cout << log2(1e9);
    return 0;
}
