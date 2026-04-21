/*
You are given an integer n. 
You need to check whether it is an armstrong number or not. 
Return true if it is an armstrong number, 
otherwise return false.



An armstrong number is a number which is equal to the sum of the digits of the number, 
raised to the power of the number of digits.


Example 1
Input: n = 153
Output: true
Explanation: Number of digits : 3.
13 + 53 + 33 = 1 + 125 + 27 = 153.
Therefore, it is an Armstrong number.

Example 2
Input: n = 12
Output: false
Explanation: Number of digits : 2.
12 + 22 = 1 + 4 = 5.
Therefore, it is not an Armstrong number.
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int x = n;
        int digits = log10(n) + 1;
        long long sum = 0;
        while (x > 0){
            int temp = x % 10;
            sum += round(pow(temp, digits));
            x = x / 10;
        }
        return (sum == n);
    }
};

int main(){
    Solution mySolution;
    int test_number = 9474;
    bool armcheck = mySolution.isArmstrong(test_number);
    cout << armcheck;
    return 0;
}