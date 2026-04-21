//Divisors of a Number

/*You are given an integer n. 
You need to find all the divisors of n. 
Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.


Example 1
Input: n = 6
Output = [1, 2, 3, 6]
Explanation: The divisors of 6 are 1, 2, 3, 6.

Example 2
Input: n = 8
Output: [1, 2, 4, 8]
Explanation: The divisors of 8 are 1, 2, 4, 8.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector <int> arr;
        for(int i = 1; i*i <= n; i++){
        // i*i to avoid flotaing-point traps of sqrt()    
            if(n % i == 0){
                arr.push_back(i);
                if (i != (n/ i)){
                    arr.push_back(n / i);
                }
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};