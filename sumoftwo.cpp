#include <iostream>
using namespace std;
int main()
{/*
    int nums[10], target, i, n;
    
    // You need to read the number of elements in the array from the user
    cout << "Enter the number of elements (up to 10): ";
    cin >> n;

    cout << "Enter the array:";
    for (i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target number:";
    cin >> target;

    // You're trying to access elements beyond the array size
    // Also, the condition for checking the sum is incorrect
    for (i = 0; i < n - 1; i++) {
        if (nums[i] + nums[i + 1] == target) {
            cout << "[" << nums[i] << "," << nums[i + 1] << "]";
        }
    }

    return 0;
}*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};
}