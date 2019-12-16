#include <iostream>
#include <algorithm>

using namespace std;

int N;
int K;

int main()
{
    cin >> N;

    while (N--){
        cin >> K;
        int M[K + 1];
        int F[K + 1];
        F[0] = 0;
        M[0] = 0;

        for (int i = 1 ; i <= K ; i++){
            cin >> M[i];
            F[i] = 0;
        }

        for (int i = 1 ; i <= K ; i++){
            for (int j = i - 1 ; j >= 0 ; j--)
                if (M[i] > M[j] && F[j] + 1 > F[i])
                        F[i] = F[j] + 1;
        }

        cout << *max_element(F + 1, F + 1 + K) << endl;
    }
    return 0;
}