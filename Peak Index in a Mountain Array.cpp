#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        

        int st=1;int end=arr.size()-2;int mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};


int main(){
    vector<int> price={0,10,5,2};
Solution sol;
int result =sol.peakIndexInMountainArray(price);
cout<< "the max profit is "<<result;
}