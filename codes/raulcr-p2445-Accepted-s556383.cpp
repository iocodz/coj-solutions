///by r@ul!
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    string a;
    cin >> a;

    char sol = a[0], ca = a[0];
    int csol = 0, cas = 0;

    for (int i = 1 ; i < a.length() ; i++){

        if (ca >= 'A' && ca <= 'Z' && a[i] >= 'A' && a[i] <= 'Z' && ca > a[i])
            cas++;

        else if (ca >= 'A' && ca <= 'Z' && a[i] >= 'a' && a[i] <= 'z')
            cas++;

        else if (ca >= 'a' && ca <= 'z' && a[i] >= 'a' && a[i] <= 'z' && ca > a[i])
            cas++;

        else {
            ca = a[i];
            cas = 0;
        }

        if (csol < cas){
            csol = cas;
            sol = ca;
        }

    }

    cout << sol;


    return 0;
}
