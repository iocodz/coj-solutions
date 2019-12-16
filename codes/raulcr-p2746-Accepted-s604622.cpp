#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int k = 0, j = 0;
    for (int i = 0 ; i < a.length() ; i++){
        if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
            k++;
        else
            j++;
    }
    cout << j << ' ' << k;
    return 0;
}
