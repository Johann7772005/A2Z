#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int mini = i;  

            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }

            if (mini != i) {
                swap(nums[i], nums[mini]);
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> sorted = sol.selectionSort(nums);

    cout << "Sorted array:\n";
    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
