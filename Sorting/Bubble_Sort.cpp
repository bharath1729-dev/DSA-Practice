// Bubble Sort
/*Given an array of integers called nums,
sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.

A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.


Example 1
Input: nums = [7, 4, 1, 5, 3]
Output: [1, 3, 4, 5, 7]
Explanation: 1 <= 3 <= 4 <= 5 <= 7.
Thus the array is sorted in non-decreasing order.

Example 2
Input: nums = [5, 4, 4, 1, 1]
Output: [1, 1, 4, 4, 5]
Explanation: 1 <= 1 <= 4 <= 4 <= 5.
Thus the array is sorted in non-decreasing order.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n ; i++){
        bool isSwap = false;
        // to check the swap
        // n-i-1 becoz nums[j+1] shouldt not touch outside memory
        for (int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false){
            return nums;
        }
    }  
    return nums;
    }
};
