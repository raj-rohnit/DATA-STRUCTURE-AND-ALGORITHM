//power (x,n)
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//power (x,n) by using the binary exponentation method 
class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double ans = 1;

        while (power > 0) {
            if (power & 1) {     // if odd
                ans *= x;
            }
            x *= x;             // square base
            power >>= 1;        // divide by 2
        }

        return ans;
    }
};



int main(){
Solution sol;
double result =sol.myPow(2.1000,4);
cout<< "the  power (x,n) is "<<result;
}