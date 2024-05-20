#include <bits/stdc++.h>

using namespace std;

int minimizeString(string str){
    if(str.length() == 1){
        return stoi(str);
    }

    int finalAns = 0;

    for (int i = 0; i < str.length(); i++)
    {
        finalAns += str.at(i) - 48;
    }

    return minimizeString(to_string(finalAns));
}

int parseString(string str){
    int sum = 0;

    for (int i = 0; i < str.length(); i++){
        char currentChar = tolower(str.at(i));
        if(currentChar >= 97 && currentChar <= 122){
            sum += (currentChar - 96);
        }
    }

    return minimizeString(to_string(sum));
}

int main(){
    string name1, name2;
    while(getline(cin, name1) && getline(cin, name2)){
        int name1Val = parseString(name1);
        int name2Val = parseString(name2);
        int aux;

        if(name2Val < name1Val){
            aux = name1Val;
            name1Val = name2Val;
            name2Val = aux;
        }

        printf("%.2f %%\n", ((name1Val * 1.0f) / (name2Val * 1.0f)) * 100);
    }

    return 0;
}