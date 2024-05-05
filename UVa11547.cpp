#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t){
        cin >> n;
        float ans = abs((((((n * 567.0f) / 9.0f) + 7492.0f) * 235.0f) / 47) - 498);
        cout << (int)(ans / 10) % 10 << "\n";
        --t;
    }

    return 0;
}