#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, c, count, X;
    X = 1;
    cin >> N;
    while(true){
        if(N == 0) break;
        count = 0;
        while (N--){
            cin >> c;
            if(c == 0){
                count--;
            }else{
                count++;
            }
        }
        cout << "Case " << X << ": " << count << "\n";
        cin >> N;
        X++;
    }
}