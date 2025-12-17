//#MAJORITY ELEMENT by  Boyer-Moore Voting Algorithm
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution{
public:

////moores  voting algorithm
int majorityElement(vector<int>& nums){


int num=nums[0];int count=0;
int n =nums.size();
for (int i=0;i<n;i++){
    if (nums[i]==num){
        count++;
    }
    else{
        count--;
        if (count==0){
            num=nums[i];
            count=1;
        }
    }
}


count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == num)
            count++;}
if (count>(n/2)){
    return num ;
}
    else {
    return -1;



// shotcut for the moores voting algo
// int el;
//         int cnt = 0;
//         for (auto i : nums) {
//             if (cnt == 0) 
//                 el = i, cnt++;
//             else 
//                 i == el ? cnt++ : cnt--;
//         }
//         return el;
}
}
};





int main(){
Solution sol;
vector<int> nums = {2, 2, 1, 1, 2, 2, 2};
int result = sol.majorityElement(nums);

if (result != -1)
    cout << "Majority element is: " << result << endl;
else
    cout << "No majority element found." << endl;
}






