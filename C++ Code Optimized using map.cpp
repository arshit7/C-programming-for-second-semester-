#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> m;

    for(int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];

        if(m.find(diff) != m.end()) {
            cout << "Indices: " << m[diff] << " " << i;
            return 0;
        }

        m[nums[i]] = i;
    }

    return 0;
}