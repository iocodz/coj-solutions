///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, sol = "";
    cin >> a;
    string b = a + "0000";
    a = "0000" + a;

    int llevo = 0;

    for(int i = a.length() - 1 ;i >= 0 ; i--){
        int x = (a[i] - '0') + (b[i] - '0') + llevo;
        llevo = x / 2;
        char c = ((x % 2) + '0');
        sol = c + sol;
    }
    if(llevo == 1)
        sol = "1" + sol;
    cout << sol;
    return 0;
}
