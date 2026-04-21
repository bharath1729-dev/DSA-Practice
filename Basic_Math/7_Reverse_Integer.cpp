/*Given a signed 32-bit integer x, 
return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], 
then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Time Complexity: 0(n)
// Space Complexity: 0(1) 

class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while (x != 0){
            if (revNum > INT_MAX/10 || revNum < INT_MIN/10){
            return 0;
            }
            int temp = x % 10;
            revNum = (revNum * 10) + temp;
            x = x / 10;
        }
        return revNum;
    }
};