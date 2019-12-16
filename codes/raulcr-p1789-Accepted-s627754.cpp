#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <string>


using namespace std;

typedef long long LL;

string A[2] = {"Vasha", "Molek"};

vector<LL> factoriza(LL N){
    vector<LL> e;

    if (N % 2 == 0){
        while (N % 2 == 0){
            N /= 2;
            e.push_back(2);
        }
    }

    for (LL i = 3 ; i * i <= N ; i += 2)
        if (N % i == 0){
            while (N % i == 0){
                N /= i;
                e.push_back(i);
            }
        }

    if (N > 1)
        e.push_back(N);

    return e;
}

int main()
{
    int k;
    LL N;
    cin >> k;

    while (k--){
        cin >> N;
        if (N == 1)
            cout << A[0] << "\n0\n";

        else{
            vector<LL> e = factoriza(N);

            if (e[0] == N)
                cout << A[0] << "\n0\n";

            //for (int i = 0 ; i < e.size() ; i++)
            //    cout << e[i] << ' ';

            else if (e.size() == 2)
                cout << A[1] << '\n';

            else
                {
                    sort(e.begin(), e.end());

                    cout << A[0] << '\n' << (long long)(e[0] * e[1]) << endl;
                }
        }

    }

    return 0;
}
