#include <iostream>

using namespace std;

int main()
{
    int cc;
    cin >> cc;

    while (cc--){
        int sh, sm, sumh = 0, sump = 0, m, sp;
        cin >> sm >> sh;

        sp = sm + sh;
        
        int h = 0;
        int p = 0;

        for( ; sumh < sh; h++)
            sumh += h;

        for( ; sump < sp; p++)
            sump += p;

        m = p - h;
        if(sumh > sh || sump > sp || sh == 0)
            cout << "Uhh... I do not know.\n";

        else if(m==1)
            cout << "There are " << m  << " woman and " << h << " men at the party.\n";

        else if(h==1)
            cout << "There are " << p - h  << " women and " << h << " man at the party.\n";

        else
            cout << "There are " << m  << " women and " << h << " men at the party.\n";

    }
    return 0;
}
