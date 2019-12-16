#include <bits/stdc++.h>

using namespace std;

int N, T, t[101], c;
string name, name2;

int main()
{
	cin >> T >> N;
	fill(t, t + 101, 2);
	while(N--){
		cin >> c >> name;
		bool ok = 0;
		if(c == 2){
			cin >> name2;
			for(int i = 1 ; i <= T ; i++){
				if(t[i] >= c){
					cout << name << ' ' << (i - 1) * 2 + 1 << '\n';
					cout << name2 << ' ' << i * 2 << '\n';
					t[i] -= 2;
					ok = 1;
					break;
				}
			}
		}
		else{
			for(int i = 1 ; i <= T ; i++){
				if(t[i] == 2){
					cout << name << ' ' << (i - 1) * 2 + 1 << '\n';
					t[i]--;
					ok = 1;
					break;
				}
				else if(t[i] == 1){
					cout << name << ' ' << i * 2 << '\n';
					t[i]--;
					ok = 1;
					break;
				}
			}
		}
		if(!ok)
			cout << name << " left\n";
		if(!ok && c == 2)
			cout << name2 << " left\n";
	}
    return 0;
}
