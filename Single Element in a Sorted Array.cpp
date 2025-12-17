#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            // make mid even
            if (mid % 2 == 1) mid--;

            if (arr[mid] == arr[mid + 1]) {
                st = mid + 2;
            } else {
                end = mid;
            }
        }
        return arr[st];

          // this code is not executing for some code bases (pending to dry run )// lecture 20 DSA sradha mam

        // int n =arr.size();
        // if(n==1) return arr[0];
        // int st=1;int end =n-2;
        // while(st<=end){
        //     int mid = st + (end - st) / 2;
        //     if(mid==0 && arr[mid]!=arr[mid+1]) return arr[mid];
        //     if(mid==n-1 && arr[mid-1]!=arr[mid-2]) return arr[mid];
        //     if (arr[mid]!=arr[mid+1]&& arr[mid]!=arr[mid-1]) return arr[mid];
        //     else if(mid%2==0){
        //         if (arr[mid]>arr[mid+1]) st=mid+2;
        //         else end=mid-1;
        //     }
        //     else {
        //         if (arr[mid]>arr[mid+1]) end=mid-1;
        //         else st=mid+1;
        //     }
        // }
        // return -1;
    }
};




int main(){
    vector<int> price={1,1,4,4,5,5,7};
Solution sol;
int result =sol.singleNonDuplicate(price);
cout<< "the result is "<<result;
}