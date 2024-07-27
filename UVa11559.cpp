#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, B, H, W, p, a, min;

    while(cin >> N >> B >> H >> W){
        min = numeric_limits<int>::max();

        for (int i = 0; i < H; i++){
            cin >> p;
            int price = p * N;
            for (int Wi = 0; Wi < W; Wi++){
                cin >> a;
                if (a < N) continue;
                if (price < min){
                    min = price;
                }
            }
        }
        if(min <= B){
            cout << min << "\n";
        }else{
            cout << "stay home\n";
        }
    }

    return 0;
}