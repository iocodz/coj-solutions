#include <bits/stdc++.h>

using namespace std;

int N;
string M;

int main()
{
    cin >> N;

    while(N--){
        cin >> M;

        for(int i = 0 ; i < M.size() ; i++){
            if(M[i] >= 'A' && M[i] <= 'Z')
                M[i] += 32;
            else
                M[i] -= 32;
        }

        cout << M << '\n';
    }
    return 0;
}
