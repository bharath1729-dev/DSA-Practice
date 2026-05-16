/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxxCount = 0;
        for (int num : st) {
            if (!st.count(num - 1)) {
                int currCount = 1;
                int a = num + 1;
                while (st.count(a)) {
                    currCount++;
                    a++;
                }
                if (maxxCount < currCount) {
                    maxxCount = currCount;
                }
            }
        }
        return maxxCount;
    }
};