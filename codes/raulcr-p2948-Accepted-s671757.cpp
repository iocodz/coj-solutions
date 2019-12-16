#include <iostream>
#include <string>
//#include <algorithm>

using namespace std;

int N;
string K;

int main()
{
    cin >> N;

    while (N--){
        cin >> K;

        int sum = 0;

        for (int i = 0 ; i < K.length() ; i++)
            sum += (K[i] - '0');

        while(sum >= 10){
            int m = 0;

            while(sum > 0){
                m += (sum % 10);
                sum /= 10;
            }

            sum = m;
        }

        cout << sum << '\n';

    }

    return 0;
}
