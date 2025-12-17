//single number
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(auto i:nums){
            ans^=i;
        }
        return ans;
    }
};


int main(){
    vector<int> price={2,2,1};
Solution sol;
int result =sol.singleNumber(price);
cout<< "the max profit is "<<result;
}