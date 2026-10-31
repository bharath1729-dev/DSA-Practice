// 560 SubArray Sum Equals K

/* 
Given an array of integers nums and an integer k, 
return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array
Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
*/ 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        int preSum = 0;
        int count = 0;
        mpp[0] = 1;
        for(int i = 0; i < n; i++){
            preSum += nums[i];
            if(mpp.count(preSum -k) != 0){
                count += mpp[preSum -k];
            }
            mpp[preSum] += 1;
        }
        return count;
    }
};