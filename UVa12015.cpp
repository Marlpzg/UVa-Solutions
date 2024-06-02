#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, maxRelevance, relevance;
    string site;

    cin >> T;

    for (int i = 1; i <= T; i++){
        maxRelevance = 0;
        map<int, vector<string>> dataList;
        for (int j = 0; j < 10; j++){
            cin >> site >> relevance;
            maxRelevance = max(maxRelevance, relevance);
            dataList[relevance].push_back(site);
        }

        cout << "Case #" << i << ":\n";
        for (int j = 0; j < dataList[maxRelevance].size(); j++){
            cout << dataList[maxRelevance].at(j) << "\n";
        }
        
    }
    

    return 0;
}