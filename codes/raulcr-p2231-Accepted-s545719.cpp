///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, ja = 0, jb = 0;
    cin >> a;
    while (a > 0){
        string b, c;
        cin >> b >> c;
        if (b == "rock" && c == "scissors" || b == "paper" && c == "rock" || b == "scissors" && c == "paper")
            ja++;
        if (c == "scissors" && b == "paper" || c == "paper" && b == "rock" || c == "rock" && b == "scissors")
            jb++;
        a--;
    }
    if (ja > jb)
        cout << "A win" << '\n';
    else if (ja < jb)
        cout << "B win" << '\n';
    else if (ja == jb)
        cout << "tied" << '\n';
    return 0;
}
