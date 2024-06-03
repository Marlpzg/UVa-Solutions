#include <bits/stdc++.h>

using namespace std;

const string ONE = ".....*****.....";
const string TWO = "*.****.*.****.*";
const string THREE = "*.*.**.*.******";

int main(){
    int n;
    string board[5] = {};
    string readStr, arrangedStr = "";
    cin >> n;

    for (int i = 0; i < 5; i++){
        cin >> readStr;
        board[i] = readStr;
    }

    int size = 4 * n;

    for (int currentNumber = 0; currentNumber < n; currentNumber++){
        string currentChar = "";
        for (int i = currentNumber*4; i < (currentNumber*4+3); i++){
            for (int j = 0; j < 5; j++){
                currentChar = currentChar + board[j][i];
            }
        }
        if(currentChar==ONE){
            arrangedStr += "1";
        } else if(currentChar==TWO){
            arrangedStr += "2";
        } else if(currentChar==THREE){
            arrangedStr += "3";
        }
    }

    cout << arrangedStr << "\n";

    return 0;
}