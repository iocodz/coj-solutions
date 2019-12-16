#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> T;
vector<int> P;

void prec(){
    for(int i = 1 ; i <= 13 ; i++)
        T.push_back(pow(5, i));

    //P.push_back(5);

    for(int i = 0 ; i < T.size() ; i++){

        for(int j = i - 1 ; j >= 0 ; j--)
            P.push_back(T[i] + T[j]);
        for(int j = P.size() - 1 ; j >= 0 ; j--){
            if(T[i] > P[j])
                P.push_back(T[i] + P[j]);
        }
    }
    for(int i = 0 ; i < P.size() ; i++)
        T.push_back(P[i]);
}

int main()
{
    prec();
    sort(T.begin(), T.end());
    cin >> N;

    while(N--){
        cin >> M;
        cout << T[M - 1] << '\n';
    }

    return 0;
}
