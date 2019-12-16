#include <iostream>
#include <string>

using namespace std;

bool div3(string a){
    long long sum = 0;
    for (int i = 0; i < a.length(); i++){
        sum += a[i];
    }
    if (sum % 3 == 0)
        return 1;
    return 0;
}

bool div2(string a, int aa){
    if ((a[aa] - 48) % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int cant, aa;
    string a;
    cin >> cant;
    while (cant > 0){
        cin >> a;
        aa = a.length () - 1; 
        if(div3(a) && div2(a, aa))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cant--;
    }
    return 0;
}
