#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int x, y;
    if (a == "square"){
        cin >> x;
        cout << x * x << endl;
    }
    else if (a == "rectangle"){
        cin >> x >> y;
        cout << x * y << endl;
    }
    return 0;
}
