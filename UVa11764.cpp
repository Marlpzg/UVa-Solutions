#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, N, current, next;
    cin >> T;
    for (int test = 1; test <= T;  test++){
        cin >> N >> current;
        int high = 0;
        int low = 0;
        for (int i = 1; i < N; i++){
            cin >> next;
            if(current < next){
                high++;
            }else if(current > next){
                low++;
            }
            current = next;
        }
        cout << "Case " << test << ": " << high << " " << low << "\n";
    }

    return 0;
}