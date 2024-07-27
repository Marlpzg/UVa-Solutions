#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, C, P;

    cin >> N;

    while (N){
        vector<int> starting_board(N, 0);

        for (int i = 0; i < N; i++){
            cin >> C >> P;
            if (i + P >= 0 && i + P < N){
                starting_board[i + P] = C;
            }
        }

        int flag = 1;
        string result = "";

        for (int i = 0; i < N; i++){
            if (starting_board[i] == 0){
                flag = 0;
                break;
            }
            else{
                result = result + to_string(starting_board[i]) + ((i < N - 1) ? " " : "");
            }
        }
        cout << (flag ? result : "-1") << "\n";

        cin >> N;
    }
}
