//Product of Array Except Self
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1, suffix = 1;
        vector<int> result(n, 1);

        for(int i = 0; i < n; i++){
            result[i] *= prefix;
            prefix *= nums[i];
        }

        for(int i = n - 1; i >= 0; i--){
            result[i] *= suffix;
            suffix *= nums[i];
        }
        
        return result;
    }
};


int main() {
    vector<int> price = {1,2,3,4};
    Solution sol;
    vector<int> result = sol.productExceptSelf(price);

    cout << "The product except self is: ";
    for (int x : result) {
        cout << x << " ";
    }}