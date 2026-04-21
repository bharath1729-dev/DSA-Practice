/*Given an integer x, 
return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. 
Therefore it is not a palindrome.
*/

#include <iostream>
#include <algorithm>

// Time Complexity: 0(n)
// Space Complexity: 0(1) 

class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long pali = 0;
        if (x < 0){
            return false;
        }
        while (n > 0){
            int temp = n % 10;
            pali = pali * 10 + temp;
            n = n / 10;    
        }
    return (pali == x);
    }
};