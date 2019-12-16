#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;
string S[] = {"out", "output", "puton", "in", "input", "one"};
int N;

int main()
{
    cin >> N;

    while(N--){
        string K;
        cin >> K;
        K = " " + K;
        bool B[MAXN];

        memset(B, 0, sizeof(B));

        B[0] = 1;

        for(int i = 2 ; i < K.size() ; i++){
            for(int j = 0 ; j < 6; j++){
                int posi = i - S[j].size() + 1;
                if(posi > 0 && B[posi - 1] && K.substr(posi, S[j].size()) == S[j]){
                    B[i] = 1;
                    break;
                }
            }
        }
        if(B[K.size() - 1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
