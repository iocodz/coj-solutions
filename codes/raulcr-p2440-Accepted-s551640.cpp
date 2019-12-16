///by r@ul!

#include <iostream>
#include <string>

using namespace std;

bool timina(string a){
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i] == 'T')
            return 1;
    }
    return 0;
}

bool sspf(string a, string b){
    for(int i = 0 ; i < a.length() ; i++){
        if(a.substr(i ,b.length()) == b)
            return 1;
    }
    return 0;
}

int main()
{
    int cc;
    string a, b;
    cin >> cc;
    while(cc > 0){
        cin >> a >> b;
        if(!timina(a))
            cout << "N\n";
        else{
            if(sspf(a, b))
                cout << "Y\n";
            else
                cout << "N\n";
        }
        cc--;
    }
    return 0;
}
