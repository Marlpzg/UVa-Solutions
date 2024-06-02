#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, acum, consecutives;
    string S;

    cin >> T;

    while(T--){
        cin >> S;
        consecutives = 0;
        acum = 0;
        for (int i = 0; i < S.length(); i++){
            if (S.at(i) == 'O'){
                consecutives++;
                acum += consecutives;
            }else{
                consecutives = 0;
            }
        }
        cout << acum << "\n";
    }

    return 0;
}