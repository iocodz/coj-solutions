#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int N, M, sol = 0;
	set<string> a;
	cin >> N;
    string s;
	for (int i = 0 ; i < N ; i++){
		cin >> s;
		if(a.find(s) == a.end())
			a.insert(s);
	}

	cin >> M;
	while(cin >> s){
		if(a.find(s) == a.end())
			sol++;
	}
	cout << sol << '\n';
	return 0;
}
