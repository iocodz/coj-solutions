///by r@ul!

#include <iostream>
#include <string>

using namespace std;

string subst(string a, int b, int c){
    string sol = "";
    for(int i = b ; i <= c ; i++){
        sol += a[i];
    }
    return sol;
}

int main()
{
    int cc, c;
    string a;
    cin >> cc;
    for(int i = 1 ; i <= cc ; i++){
        cin >> c >> a;
        cout << i << " ";
        int TTT = 0, TTH = 0, THT = 0, THH = 0, HTT = 0, HTH = 0, HHT = 0, HHH = 0;
        for(int j = 0 ; j < a.length() - 2 ; j++){
            string s = subst(a, j, j + 2);
            if(s == "TTT")
                TTT++;
            else if(s == "TTH")
                TTH++;
            else if(s == "THT")
                THT++;
            else if(s == "THH")
                THH++;
            else if(s == "HTT")
                HTT++;
            else if(s == "HTH")
                HTH++;
            else if(s == "HHT")
                HHT++;
            else if(s == "HHH")
                HHH++;
        }

        cout << TTT << " " << TTH << " " << THT << " " << THH << " " << HTT << " " << HTH << " " << HHT << " "  << HHH << "\n";
    }
    return 0;
}
