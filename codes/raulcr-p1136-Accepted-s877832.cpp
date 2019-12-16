#include <bits/stdc++.h>

using namespace std;

const int MAXN = 32000;

int N, M, T;
bool mk[MAXN];
vector<int> pr;

void criba(){
    mk[0] = mk[1] = true;
    for(int i = 2 ; i < MAXN ; i++)
        if(!mk[i]){
            pr.push_back(i);
            for(int j = i * 2 ; j < MAXN ; j += i)
                mk[j] = true;
        }
}

int cpos(int i){
    return pr[i] * pr[i];
}

bool ok(int num){
    if(num <= 1)
        return false;
    for(int i = 0 ; i < pr.size() && cpos(i) <= num; i++)
        if(num % pr[i] == 0)
            return false;
    return true;
}

int main()
{
    criba();

    cin >> T;

    while(T--){
        cin >> N >> M;

        for(int i = N ; i <= M ; i++)
            if(ok(i))
                cout << i << '\n';
        cout << '\n';
    }

    return 0;
}
