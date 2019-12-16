#include <iostream>
#include <algorithm>

using namespace std;

int K;
string a;

string cow(string a){
    if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u')
        return a + "cow";
    else {
        string x = "";
        for (int i = 1 ; i < a.size() ; i++)
            x += a[i];
        x += a[0];
        return x + "ow";
    }
}

int main()
{
    cin >> K;

    for (int i = 0 ; i < K ; i++){
        cin >> a;
        cout << cow(a) << endl;
    }

    return 0;
}
