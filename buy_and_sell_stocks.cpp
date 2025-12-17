//Stock Buy & Sell
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// buy and sell stocks 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;int profit;int maxprofit=INT_MIN;
        for(auto i: prices){
            cp=min(i,cp);
            profit=i-cp;
            maxprofit=max(profit,maxprofit);
            }
        return maxprofit;
        }
};


int main(){
    vector<int> price={1,3,5,7,8,9,80,1000};
Solution sol;
int result =sol.maxProfit(price);
cout<< "the max profit is "<<result;
}