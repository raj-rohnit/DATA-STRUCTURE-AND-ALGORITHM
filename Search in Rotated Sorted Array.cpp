#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[start]<=nums[mid]){// left sorted
                if(nums[start]<=target && target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else {// right sorted 
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
                
            }
        }
        return -1;
    }
};

int main(){
    vector<int> price={7,8,9,10,1,2,3,4,5,6};
Solution sol;
int target;
cout<<"enter target from 0 to 10";
cin>>target;
int result =sol.search(price, target);
cout<< "the  index is the  "<<result;
}