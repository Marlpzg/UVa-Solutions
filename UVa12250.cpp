#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string input;
    int tests = 1;
    while(true){
        cin >> input;

        if(input == "#"){
            break;
        }

        if(input == "HELLO"){
            cout << "Case " << tests << ": ENGLISH\n";
        }else if(input == "HOLA"){
            cout << "Case " << tests << ": SPANISH\n";
        }else if(input == "HALLO"){
            cout << "Case " << tests << ": GERMAN\n";
        }else if(input == "BONJOUR"){
            cout << "Case " << tests << ": FRENCH\n";
        }else if(input == "CIAO"){
            cout << "Case " << tests << ": ITALIAN\n";
        }else if(input == "ZDRAVSTVUJTE"){
            cout << "Case " << tests << ": RUSSIAN\n";
        }else{
            cout << "Case " << tests << ": UNKNOWN\n";
        }
        tests++;
    }
    return 0;
}