// 152 Maximum Product SubArray
/*
Given an integer array nums, find a subarray that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.
Note that the product of an array with a single element is the value of that element.
*/

/*
​​​​​​​Example 1:
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int result = nums[0];
        int currmax = nums[0];
        int currmin = nums[0];
        for(int i = 1; i < n; i++){
            int temp = max({nums[i], currmax * nums[i], currmin * nums[i]});
            currmin = min({nums[i], currmax * nums[i], currmin * nums[i]});
            currmax = temp;
            result = max(result, currmax);
        }
        return result;
    }
};