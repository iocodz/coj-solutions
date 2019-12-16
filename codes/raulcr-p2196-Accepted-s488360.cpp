#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    int a;
    cin >> a;
    while(a > 0){
        cin >> n;
        a--;
        if (n[n.length() - 1] % 2 == 0){
            cout << "even"<<endl;
        }
        else{
            cout << "odd"<<endl;
        }
    }
    return 0;
}