//****Count all Digits of a Number****

//********** Strivers A2Z  **********

/*You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.


Example 1:
Input: n = 4
Output: 1
Explanation: There is only 1 digit in 4.

Example 2:
Input: n = 14
Output: 2
Explanation: There are 2 digits in 14.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity: 0(n)
// Space Complexity: 0(1) 

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while(n > 0){
            count++;
            n = n/10;
        }
        return count;
    }
};

int main() {
    // 1. Create an instance of your class
    Solution mySolution;

    // 2. Set up a test case 
    int test_number = 15007;

    // 3. Call your function and store the answer 
    int result = mySolution.countDigit(test_number);

    //4. Print the answer to the terminal 
    cout << "number of digits in " << test_number << " is: " << result << endl;

    return 0;
}