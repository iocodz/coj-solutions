#include <iostream>

using namespace std;

int main()
{
    int cc;
    cin >> cc;

    while (cc--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int x = x2 - x1;
        int y = y2 - y1;

        if (x < 0)
            x *= -1;

        if (y < 0)
            y *= -1;

        cout << x + y << "\n";
    }

    return 0;
}
