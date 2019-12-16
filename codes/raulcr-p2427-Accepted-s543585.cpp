///By r@ul!

#include <iostream>

using namespace std;

int TA[1000001];

bool prime(int b){
    if (b < 2)
        return 0;
    if (b == 2)
        return 1;
    for (int i = 2; i * i <= b; i++){
        if (b % i == 0)
            return 0;
    }
    return 1;
}

int calpr(){
    TA[0] = 0;
    TA[1] = 0;
    for (int i = 2; i <= 1000000; i++){
            if (prime(i))
                TA[i] = TA[i - 1] +  1;
            else
                TA[i] = TA[i - 1];
    }
}

int main()
{
    calpr();
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0)
            return 0;
        cout << TA[b] - TA[a - 1] << endl;
    }
    return 0;
}
