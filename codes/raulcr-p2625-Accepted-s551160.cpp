///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string c = "OIE";
    int a, b, x = 0;
    cin >> a >> b;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 , z = x ; j < b ; j++ , z++){
            if(z == 3)
                z = 0;
            cout << c[z];
        }
        if(x == 2)
            x = -1;
        x++;
        cout << '\n';
    }
    return 0;
}
