/* 
Given an array of integers nums, return the second-largest element in the array. 
If the second-largest element does not exist, return -1.

Example 1
Input: nums = [8, 8, 7, 6, 5]
Output: 7
Explanation:
The largest value in nums is 8, the second largest is 7

Example 2
Input: nums = [10, 10, 10, 10, 10]
Output: -1
Explanation:
The only value in nums is 10, so there is no second largest value, thus -1 is returned
*/
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = nums[0], secLarge = INT_MIN;
        bool istrue = false;
        for(int i = 0; i < n; i++){
            if(nums[i] > largest){
                secLarge = largest;
                largest = nums[i];
                istrue = true;
            }
            else if(nums[i] < largest && nums[i] > secLarge){
                secLarge = nums[i];
                istrue = true;
            }
        }
        if(istrue == false){
            secLarge = -1;
        }
        return secLarge;
    }
};