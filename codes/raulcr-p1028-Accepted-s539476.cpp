#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b){
        int lc = 0, c = 0;
        string x = "";
        for (int i = 0;  i < a.length(); i++){
            for (int j = c; j < b.length(); j++){
                if (a[i] == b[j]){
                    lc++;
                    x += b[j];
                    c = j + 1;
                    break;
                }
            }
        }
        if (x == a)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
