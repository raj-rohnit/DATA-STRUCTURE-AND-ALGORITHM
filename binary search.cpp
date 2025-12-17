// condition for the binary search is that the array should be sorted
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    int binarysearch(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>=nums[mid]){
                start=mid+1;
            }
            else if(target<=nums[mid]){
                end=mid-1;
            }
        }
        return -1;
    }
};


int main(){
    vector<int> price={1,3,4,5,6,7,8,9};
Solution sol;
int result =sol.binarysearch(price,4);
cout<< "the index found which is equal to target  is "<<result;
}