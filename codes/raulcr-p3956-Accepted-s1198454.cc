#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int N;
queue<int> pstr;
stack<int> str;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(cin >> N && N){
        for(int i = 1 ; i <= N ; i++){
            int a;
            cin >> a;
            pstr.push(a);
        }

        int pass = 0;


        while(!pstr.empty() || !str.empty()){
            int fr = 0;
            bool op = 0;
            if(pstr.size()){
                fr = pstr.front();
                pstr.pop();
            }

            if(str.size()){
                if(str.top() == pass + 1){
                    pass++;
                    op = true;
                    str.pop();
                }
            }


            if(fr == pass + 1){
                pass++;
                op = true;
                continue;
            }

            else if(fr != 0){
                str.push(fr);
                op = true;
            }

            if(!op)
                break;
        }

        if(pass == N){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }

        while(str.size())
            str.pop();
        while(pstr.size())
            str.pop();

    }
    return 0;
}
