#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int N;
set<string> Q;

int main(){
    cin >> N;

    int sol = 0;

    while(N--){
        string a;
        cin >> a;


        sort(a.begin(), a.end());

        if(Q.find(a) == Q.end())
            sol++;
        Q.insert(a);
    }

    cout << sol;

	return 0;
}
