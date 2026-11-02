// 229 Majority Element II
/*
Given an integer array of size n, 
find all elements that appear more than ⌊n / 3⌋ times.

Example 1:
Input: nums = [3,2,3]
Output: [3]

Example 2:
Input: nums = [1]
Output: [1]

Example 3:
Input: nums = [1,2]
Output: [1,2]
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1 = 0;
        int ele2 = 0;
        int freq1 = 0;
        int freq2 = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(freq1 == 0 && ele2 != nums[i]){
                ele1 = nums[i];
                freq1++;
            }
            else if(freq2 == 0 && ele1 != nums[i]){
                ele2 = nums[i];
                freq2++;
            }
            else if(ele1 == nums[i]){
                freq1++;
            }
            else if(ele2 == nums[i]){
                freq2++;
            }
            else{
                freq1--;
                freq2--;
            }
        }
        freq1 = 0;
        freq2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == ele1){
                freq1++;
            }
            else if(nums[i] == ele2){
                freq2++;
            }
        }
        if(freq1 > n/3 && freq2 > n/3){
            return {ele1,ele2};
        }
        else if(freq1 > n/3){
            return {ele1};
        }
        else if(freq2 > n/3){
            return {ele2};
        }
        return {};
    }
};