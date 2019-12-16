#include <bits/stdc++.h>

using namespace std;

int N;
vector<long long> cubos;

inline long long i3(int i){
    return (i * i * i);
}

int main()
{
cin.tie();
    for(int i = 1 ; i3(i) <= (int)(1e9) ; i++)
        cubos.push_back(i3(i));

    while(cin >> N){
        if(!N) return 0;
        int sol = 0;

        for(int i = 0 ; cubos[i] <= N ; i++)
            if(!(N % cubos[i]))
                sol++;

        cout << sol << '\n';
    }
    return 0;
}
