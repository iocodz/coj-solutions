#include <bits/stdc++.h>

using namespace std;

int a, b, c;
char op, op1;

int main()
{
    int t;
    cin >> t;

    while(t--){
        cin >> a >> op >> b >> op1 >> c;
        if(op == '+' && a + b == c)
            cout << "Yes\n";
        else if(op == '-' && a - b == c)
            cout << "Yes\n";
        else if(op == '*' && a * b == c)
            cout << "Yes\n";
        else if(op == '/' && b && a / b == c)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
