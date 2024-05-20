#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, N, max, c;
    cin >> T;
    for (int i = 1; i <= T; i++){
        cin >> N;
        max = 0;
        while(N--){
            cin >> c;
            if(c > max){
                max = c;
            }
        }
        cout << "Case " << i << ": " << max << "\n";
    }
    
    return 0;
}