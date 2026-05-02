//Selection Sort
/*Given an array of integers nums, 
sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.

A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.


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
    vector<int> selectionSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++){
            int tempindex = i;
            for (int j = i; j < nums.size(); j++){
                if(nums[j] < nums[tempindex]){
                    tempindex = j;
                }
            }
            swap(nums[tempindex], nums[i]);
        }
        return nums;
    }
};
