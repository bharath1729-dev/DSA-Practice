/*
Given two sorted arrays nums1 and nums2, 
return an array that contains the union of these two arrays. 
he elements in the union must be in ascending order.

The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

Example 1
Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]
Output: [1, 2, 3, 4, 5, 7]
Explanation:
The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2

Example 2
Input: nums1 = [3, 4, 6, 7, 9, 9], nums2 = [1, 5, 7, 8, 8]
Output: [1, 3, 4, 5, 6, 7, 8, 9]
Explanation:
The element 7 is common to both, 3, 4, 6, 9 are from nums1 and 1, 5, 8 is from nums2
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> nums;
        while (i < n1 && j < n2){
            if(nums1[i] <= nums2[j]){
                if(nums.size() == 0 || nums.back() != nums1[i]){
                    nums.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if(nums.size() == 0 || nums.back() != nums2[j]){
                    nums.push_back(nums2[j]);
                }
                j++;
            }
        }
        while (i < n1){
            if (nums.size() == 0 || nums.back() != nums1[i]){
                nums.push_back(nums1[i]);
            }
            i++;
        }
        while (j < n2){
            if (nums.size() == 0 || nums.back() != nums2[j]){
                nums.push_back(nums2[j]);
            }
            j++;
        }
        return nums;
    }
};