// Merge Sort
/*
Given an array of integers, nums
sort the array in non-decreasing order using the merge sort algorithm. 
Return the sorted array.

A sorted array in non-decreasing order is one in which each element is either greater than or equal to all the elements to its left in the array.


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
private:
    void MergeSort(vector<int>& nums, int low, int high){
        if(low >= high){
            return ;
        }
        int mid = (low + high) / 2;
        MergeSort(nums, low, mid);
        MergeSort(nums, mid+1, high);
        Merge(nums, low, mid, high);
        return;
    }
    void Merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp ;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid){
            temp.push_back(nums[left]);
            left++;
        }
        while (right <= high){
            temp.push_back(nums[right]);
            right++;
        }
        for (int i = low; i <= high; i++){
            nums[i] = temp[i - low];

        }
    }
public:
    vector<int> mergeSort(vector<int>& nums) {
        MergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};
