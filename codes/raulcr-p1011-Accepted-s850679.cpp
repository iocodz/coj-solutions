#include <bits/stdc++.h>

using namespace std;

int T, N, M;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("data1.in", "r", stdin);
//    freopen("data.out", "w", stdout);

    cin >> T;

    while(T--){
        cin >> N >> M;

        priority_queue<int , vector<int> , greater<int> > Q1;
        priority_queue<int , vector<int> , greater<int> > Q2;

        bool sol = false;

        for(int i = 1 ; i <= N ; i++){
            int a;
            cin >> a;

            Q1.push(a);
        }

        for(int i = 1 ; i <= M ; i++){
            int a;
            cin >> a;

            Q2.push(a);
        }

        while(1){
            if(Q2.empty()){
                sol++;
                break;
            }

            else if(Q1.empty())
                break;

            if(Q1.top() >= Q2.top())
                Q2.pop();

            else
                Q1.pop();
        }

        if(sol)
            cout << "Godzilla\n";
        else
            cout << "MechaGodzilla\n";
    }
    return 0;
}
