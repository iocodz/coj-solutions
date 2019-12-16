#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int Lista[a];
    for (int i = 0; i < a; i++){
        cin >> Lista[i];
    }
    int b;
    for (int i = 0; i < a-1; i++){
        for (int c = i+1; c < a; c++){
            if (Lista[i] > Lista[c]) {
                b = Lista[i];
                Lista[i] = Lista[c];;
                Lista[c] = b;
            }
        }
    }
    for (int c = 0; c < a; c++)
        cout << Lista[c] << endl;

    return 0;
}
