////MAXIMUM SUB ARRAY

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {1, 23, 4, 5, 6, -23};

    int maxsum = INT_MIN;
    int currsum = 0;
       // KADANES ALGORITHM------>>>>>>>>>
    // for (int i = 0; i < nums.size(); i++) {
    //     currsum += nums[i];
    //     maxsum = max(maxsum, currsum);

    //     if (currsum < 0) {
    //         currsum = 0;
    //     }
    // }


       //OPTIMIZE WAY TO SOLVE 


    for(int i=0;i<nums.size();i++){
        currsum+=nums[i];
        if (maxsum< currsum){
            maxsum=currsum;
        }
        if (currsum<0){
            currsum=0;
        }
    }
    cout << "Maximum subarray sum = " << maxsum;
    return 0;
}
