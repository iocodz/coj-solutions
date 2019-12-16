#include <bits/stdc++.h>

using namespace std;

int P[] = {1, 3, 5, 7, 9}, N;
vector<long long > K[9];

bool prime(int M){
    if(M == 2)
        return true;
    if(M < 1 || M % 2 == 0 || M == 1)
        return false;
    for(int i = 3 ; i * i <= M ; i += 2)
        if(M % i == 0)
            return false;
    return true;
}

bool supprime(long long M){
    while(M > 0){
        if(!prime(M))
            return false;

        M /= 10;
    }
    return true;
}

void prec(){
    K[1].push_back(2);
    K[1].push_back(3);
    K[1].push_back(5);
    K[1].push_back(7);

    for (int i = 2 ; i < 9 ; i++)
        for (int j = 0 ; j < K[i - 1].size() ; j++)
            for (int l = 0 ; l < 5 ; l++)
                if(supprime(K[i - 1][j] * 10 + P[l]))
                    K[i].push_back(K[i - 1][j] * 10 + P[l]);

}

int main()
{
    prec();
    while(cin >> N){
        for(int i = 0 ; i < K[N].size() ; i++)
            cout << K[N][i] << "\n";
    }
    return 0;
}
