///by Rauli

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b){
        int s = 0, c;
        for (int i = 0; i < b.length(); i++){
            if (a[s] == b[i])
                s++;
        }
        if (a.length() == s)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
