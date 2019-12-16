#include <bits/stdc++.h>

using namespace std;

int N, M;

int sumdiv(int a){
    int sum = 0;
    for(int i = 1 ; i < a ; i++)
        if(a % i == 0)
            sum+=i;
    return sum;
}

int main()
{
    cin >> N;
    while(N--){
        cin >> M;
        int k = sumdiv(M);
        if(k == M){
            cout << "perfect\n";
        }
        else if(k < M){
            cout << "deficient\n";
        }
        else
            cout << "abundant\n";
    }
    return 0;
}
