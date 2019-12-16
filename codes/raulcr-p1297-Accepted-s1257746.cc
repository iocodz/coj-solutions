#include <iostream>

using namespace std;

bool divisibleBy3(string Num){
    int sumDig = 0;
    for(auto i : Num)
        sumDig += (i - '0');
    return sumDig % 3 == 0;
}

bool divisibleBy11(string Num){
    int sumPares = 0, sumImp = 0;
    for(int i = 0 ; i < Num.size() ; i+=2)
        sumPares += (Num[i] - '0');
    for(int i = 1 ; i < Num.size() ; i+=2)
        sumImp += (Num[i] - '0');
    return !((sumPares - sumImp) % 11);
}

bool divisibleBy5(string Num){
    int lastChar = Num.size() - 1;
    return Num[lastChar] == '0' || Num[lastChar] == '5';
}

int main()
{
    int Casos;
    string Num;

    cin >> Casos;
    while(Casos--){
        cin >> Num;
        if(divisibleBy3(Num) && divisibleBy11(Num) && divisibleBy5(Num))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
