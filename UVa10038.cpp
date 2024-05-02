#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    bool flag;
    int n, num;

    vector<int> nums;
    vector<int> diffs;

    while(cin >> n){

        flag = true;
        for (int i = 0; i < n; i++) {
            cin >> num;
            nums.push_back(num);
        }
        
        for (int i = 0; i < n-1; i++) {
            diffs.push_back(abs(nums.at(i) - nums.at(i + 1)));
        }

        sort(diffs.begin(), diffs.end());

        for (int i = 1; i < n; i++){
            if(!binary_search(diffs.begin(), diffs.end(), i)){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";

        nums.clear();
        diffs.clear();
    }

    return 0;
}