#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, n, valA, valB, maxV;
    cin >> T;
    while(T--){
        maxV = -150000;
        cin >> n;
        cin >> valA;
        for (int i = 1; i < n; i++){
            cin >> valB;

            maxV = max(maxV, valA - valB);
            valA = max(valA, valB);
        }
        cout << maxV << "\n";
    }
    return 0;
}