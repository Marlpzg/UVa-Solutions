#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int tc;
    long long n;
    cin >> tc;
    while(tc){
        cin >> n;
        cout << (long long)floor((-1.0+sqrt(1.0+(8.0*n)))/2.0) << "\n";
        tc--;
    }
    return 0;
}