///by r@ul!

#include <iostream>
#include <string>

using namespace std;

string subc(string a, int b, int c){
    string sol = "";
    for(int i = b ; i <= c ; i++)
        sol += a[i];
    return sol;
}

int frec(string a, string b){
    int sol = 0;
    for(int i = 0 ; i <= a.length() - b.length() ; i++){
        if(subc(a, i, i + b.length() - 1) == b)
            sol++;
    }
    return sol;
}

int main()
{
    int cc, c = 1;
    string a, b;
    cin >> cc;
    while(cc > 0){
        int sbc;
        cin >> a;
        cin >> sbc;
        cout << "Case " << c << '\n';
        c++;
        while(sbc > 0){
            cin >> b;
            int c = frec(a, b);
            if(c > 0)
                cout << c << '\n';
            else
                cout << "Darwin was right about this creature\n";
            sbc--;
        }
        cc--;
    }
    return 0;
}
