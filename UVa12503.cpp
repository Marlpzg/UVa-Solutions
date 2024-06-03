#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, n, v, currPos;
    string instruction;

    cin >> T;

    while(T--){
        cin >> n;
        int* instructions = new int[n];
        currPos = 0;

        for (int i = 0; i < n; i++){
            cin >> instruction;
            if(instruction == "LEFT"){
                v = -1;
            } else if(instruction == "RIGHT"){
                v = 1;
            } else {
                cin >> instruction >> v;
                v = instructions[v - 1];
            }
            instructions[i] = v;
            currPos += v;
        }

        cout << currPos << "\n";
    }

    return 0;
}