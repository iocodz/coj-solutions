///by r@ul!

#include <iostream>

using namespace std;

int main()
{
    int cc, pos = 1;
    cin >> cc;
    double temp[cc], may = 0;
    for(int i = 0 ; i < cc ; i++){
        cin >> temp[i];
    }
    may = temp[0];
    for(int i = 1 ; i < cc ; i++){
        if(temp[i] >= may){
            may = temp[i];
            pos = i + 1;
        }
    }
    cout << pos;
    return 0;
}
