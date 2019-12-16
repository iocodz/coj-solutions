#include <bits/stdc++.h>

using namespace std;

vector <string> A;

int main()
{
   // freopen("a.in" , "r", stdin);
   // freopen("a.out" , "w", stdout);

    string s;

    while(cin >> s)
        A.push_back(s);

    sort(A.begin(), A.end());

    for(int i = 0; i < A.size(); i++)
    {
        s = A[i];
        if (s.size() > 1)
            for(int j = 0; j <= s.size() - 2; j++)
            {
                string x = s.substr(0, j + 1);
                if(binary_search(A.begin(), A.end(), x))
                {
                    x = s.substr(j + 1);
                    if(binary_search(A.begin(), A.end(), x))
                    {
                        cout << s << "\n";
                        break;
                    }
                }
            }
    }
    return 0;
}
