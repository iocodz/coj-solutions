#include <iostream>
#include <string>

using namespace std;

bool busqFBI(string a){
    for(int i = 0 ; i < a.length() - 2 ; i++){
        if(a.substr(i, 3) == "FBI")
            return 1;
    }
    return 0;
}

int main()
{
    string a;
    int x = 0;
    for(int i = 1 ; i < 6 ; i++){
        cin >> a;
        if(busqFBI(a)){
            cout << i << '\n';
            x++;
        }
    }
    if(x == 0)
        cout << "HE GOT AWAY!\n";
    return 0;
}
