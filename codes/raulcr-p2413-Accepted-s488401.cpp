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
        if (n[n.length() - 1] == '5' || n[n.length() - 1] == '0'){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}
