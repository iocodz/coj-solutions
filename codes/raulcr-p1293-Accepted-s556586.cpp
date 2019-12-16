///by r@ul!
#include <iostream>
#include <string>

using namespace std;

string mult(string a, int d){
    if (d == 0)
        return "0";

    string sol = "";
    int llevo = 0;
    for (int i = a.length() - 1 ; i >= 0 ; i--){

        int b = (a[i] - '0') * d + llevo;
        sol = ((char)((b % 10) + '0')) + sol;
        llevo = b / 10;

    }
    if (llevo > 0)
        sol = ((char)(llevo + '0')) + sol;
    return sol;
}

int main()
{
    string x = "1";
    int a;
    cin >> a;

    for (int i = 1 ; i <= a ; i++)
        x = mult(x, 2);

    cout << x;
    return 0;
}
