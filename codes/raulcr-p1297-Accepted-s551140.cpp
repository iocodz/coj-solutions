///by r@ul!

#include <iostream>
#include <string>

using namespace std;

bool div(string a){
    int dp = 0, di = 0, d = 0;
    for(int i = 0 ; i < a.length() ; i++){
        if(i % 2 == 0)
            dp += a[i] - 48;
        else
            di += a[i] - 48;
    }
    if(dp - di % 11 == 0)
        d++;
    if((dp + di) % 3 == 0)
        d++;
    if(a[a.length() - 1] == '0' || a[a.length() - 1] == '5')
        d++;
    if(d == 3)
        return 1;
    return 0;
}

int main()
{
    int cc;
    string a;
    cin >> cc;
    while(cc > 0){
        cin >> a;
        if(!div(a))
           cout << "NO\n";
        else
           cout << "YES\n";
        cc--;
    }
    return 0;
}
