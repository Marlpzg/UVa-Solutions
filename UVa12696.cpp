#include <bits/stdc++.h>

using namespace std;

int main(){
    float L, W, D, weight;
    int T, allowed = 0;

    cin >> T;

    while(T--){
        cin >> L >> W >> D >> weight;
        if(((L <= 56.00 && W <= 45.00 && D <= 25.00) || (L+W+D) <= 125.00) && weight <= 7.00){
                allowed++;
                cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
    cout << allowed << "\n";

    return 0;
}