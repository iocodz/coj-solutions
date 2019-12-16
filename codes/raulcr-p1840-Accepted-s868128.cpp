#include <bits/stdc++.h>

using namespace std;

#define sec "Secure\n"
#define Nsec "No Secure\n"

int N;
string M;
int T[6];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        for(int i = 0 ; i < M.size() ; i++){
            if(M[i] == 'B')
                T[0]++;
            else if(M[i] == 'R')
                T[1]++;
            else if(M[i] == 'O')
                T[2]++;
            else if(M[i] == 'K')
                T[3]++;
            else if(M[i] == 'E')
                T[4]++;
            else if(M[i] == 'N')
                T[5]++;
        }

        bool flag = 1;

        for(int i = 1 ; i < 6 ; i++)
            flag = flag && (T[i] == T[i - 1]);

        if(flag)
            cout << Nsec;
        else
            cout << sec;

        fill(T, T + 6, 0);
    }
    return 0;
}
