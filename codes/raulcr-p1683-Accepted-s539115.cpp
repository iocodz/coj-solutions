#include <cstdlib>
#include <iostream>

using namespace std;

int sumd(int b){
    int c = 1;
    for (int i = 2; i <= b / 2; i++){
        if (b % i == 0)
           c += i;
    }
    return c;
}

int main(int argc, char *argv[])
{
    int a;
    cin >> a;
    while(a > 0){
            int b;
            cin >> b;
            if (sumd(b) == b)
               cout << "Perfect\n";
            else if (sumd(b) > b)
                 cout << "Abundant\n";
            else if (sumd(b) < b)
                 cout << "Deficient\n";
            a--;
    }
    return 0;
}