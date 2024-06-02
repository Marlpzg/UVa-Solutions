#include <bits/stdc++.h>

using namespace std;

int main(){
    int B, N, D, C, V, Ri;

    cin >> B >> N;
    while (B && N){
        vector<int> R;

        for (int i = 0; i < B; i++){
            cin >> Ri;
            R.push_back(Ri);
        }

        for (int i = 0; i < N; i++){
            cin >> D >> C >> V;
            R.at(D-1) -= V;
            R.at(C-1) += V;
        }

        int flag = 1;
        for (int i = 0; i < B; i++){
            if(R.at(i) < 0){
                flag = 0;
                break;
            }
        }

        cout << (flag ? "S\n" : "N\n");

        cin >> B >> N;
    }

    return 0;
}