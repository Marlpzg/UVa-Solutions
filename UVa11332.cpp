#include <bits/stdc++.h>

using namespace std;

int f(string n){
    if(n.length() == 1) return stoi(n);
    int sum = 0;
    for (int i = 0; i < n.length(); i++){
        string value;
        value = n.at(i);
        sum += stoi(value);
    }
    return f(to_string(sum));
}

int main(){
    int n;
    cin >> n;

    while(n){
        cout << f(to_string(n)) << endl;
        cin >> n;
    }

    return 0;
}