///by r@ul!

#include <iostream>
#include <string>

using namespace std;

string eliminr(string a){
    string res = "";
    for(int i = 0; i < a.length(); i++){
        int c = 1, j = i;
        for( ; j < a.length() && a[j] == a[j + 1] ; j++){
                if(a[j] == a[j + 1])
                    c++;
        }
        if(c % 2 != 0)
            res += a[i];
        else
            i = j;
    }
    return res;
}

int main(){
    int cc;
    string a;

    cin >> cc;

    while(cc--){
        cin >> a;
        while(true){
            string sol = a;
            a = eliminr(a);
            if(a == sol){
                cout << a << endl;
                break;
            }
        }
    }

    return 0;
}
