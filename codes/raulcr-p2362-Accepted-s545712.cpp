///by r@ul!

#include <iostream>

using namespace std;

int main()
{
    int a, cas;
    cin >> a;
    while (a > 0){
        cin >> cas;
        cout << (cas * cas) + ((cas - 1) * (cas - 1)) << '\n';
        a--;
    }
    return 0;
}
