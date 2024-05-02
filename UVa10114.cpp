#include <iostream>
#include <vector>

using namespace std;

int main(){
    int nMonths, records, month;
    float downP, loan, value, deprec, monthlyPay;

    vector<int> months;
    vector<float> deprecs;

    cin >> nMonths >> downP >> loan >> records;

    while(nMonths >= 0){
        monthlyPay = loan / nMonths;
        value = loan + downP;

        for (int record = 0; record < records; record++){
            cin >> month >> deprec;
            months.push_back(month);
            deprecs.push_back(deprec);
        }

        int currentRecord = 0;
        for (int currentMonth = 0; currentMonth < nMonths; currentMonth++) {
            if(currentMonth != 0)
                loan -= monthlyPay;
            
            // Updates the deprec value if the current month matches a deprec record month
            if(currentRecord < records && months.at(currentRecord) == currentMonth){
                deprec = deprecs.at(currentRecord);
                currentRecord++;
            }

            value *= (1-deprec);
            if(loan < value){
                cout << currentMonth << " month" << ((currentMonth == 1)?"":"s") << "\n";
                break;
            }
        }

        months.clear();
        deprecs.clear();

        cin >> nMonths >> downP >> loan >> records;
    }

    return 0;
}