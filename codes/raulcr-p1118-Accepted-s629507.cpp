#include <iostream>
#include <cstring>

using namespace std;

int K[101];

int main()
{
    int N, A;
    cin >> N;

    while (N--){
        cin >> A;

        memset(K, 0, sizeof K);

        for (int i = 1 ; i <= A ; i++){
            for (int j = 1 ; j <= A ; j++){
                if (j % i == 0){
                    K[j]++;
                }
            }
        }

        int c = 0;

        for (int i = 1 ; i <= A ; i++)
            if (K[i] % 2 != 0)
                c++;

        cout << c << endl;
    }
    return 0;
}
