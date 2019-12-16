#include <bits/stdc++.h>

using namespace std;

int N, M, T;

int main()
{
    cin >> T;
    while(T--){
        cin >> N >> M;
        vector<int> V;
        int sum = 0;
        for(int i = 1 ; i <= M ; i++){
            int a;
            cin >> a;
            sum += a;
            V.push_back(a);
        }

        sort(V.begin(), V.end());

        int sol = 0, i = 0;

        while(i < M && sol < N){
            sol += V[i];
            i++;
        }

        if(sum >= sol && sol > N)
            cout << i - 1 << '\n';
        else
            cout << i << '\n';
    }
    return 0;
}
