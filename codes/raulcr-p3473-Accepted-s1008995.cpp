#include <bits/stdc++.h>

using namespace std;

int a[4], r, ag, ob, d;

int main()
{
    for(int i = 0 ; i < 4 ; i++){
        cin >> a[i];
        if(a[i] == 90)
            r++;
        else if(a[i] > 0 && a[i] < 90)
            ag++;
        else if(a[i] > 90 && a[i] <= 180)
            ob++;

        if(!d)
            for(int j = i - 1 ; !d && j >= 0 ; j--)
                if(a[i] == a[j])
                    d = 1;
    }

    if(r == 2)
        cout << "right";
    else if(d && ag == 2 && ob == 2)
        cout << "isosceles";
    else
        cout << "none of the previous";

    return 0;
}
