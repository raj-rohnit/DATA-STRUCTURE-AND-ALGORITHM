//Container with most water
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int maxi=0;
        while (lp<rp)
        {
            int pr=min(height[lp],height[rp])*(rp-lp);
            maxi=max(pr,maxi);
            if (height[lp]<height[rp]) {
                lp++;
            } 
            else{
                rp--;
            }
        }
        return maxi;
    }
};


int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
Solution sol;
int result =sol.maxArea(height);
cout<< "the max is "<<result;
}