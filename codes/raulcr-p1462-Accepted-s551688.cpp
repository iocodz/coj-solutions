///by r@ul!

#include <iostream>
#include <string>

using namespace std;

int di[1001];

string c7ud(string a, int b){
    if(a.size() < b)
        return a;
    return a.substr(a.length() - b);
}

int conv(string a){
    int pow = 1, sol = 0;
    for(int i = a.length() - 1 ; i >= 0 ; i--, pow *= 10)
        sol += (a[i] - 48) * pow;
    return sol;
}

int main()
{
    string a;
    int b, sum = 0;
    cin >> b;
    for(int i = 1 ; i <= b ; i++){
        cin >> a;
        string s = c7ud(a, 7);
        di[i] = conv(s);
    }
    for(int i = 1 ; i <= b ; i++)
        sum = (sum + di[i]) % 128;
    cout << sum;
    return 0;
}

