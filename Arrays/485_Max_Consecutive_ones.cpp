/*Given a binary array nums, 
return the maximum number of consecutive 1's in the array.

 
Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. 
The maximum number of consecutive 1s is 3.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_streak = 0;
        int curr_streak = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 1){
                curr_streak++;  
            }
            else {
                curr_streak = 0;
            }
            if(max_streak < curr_streak){
                max_streak = curr_streak;
            }
        }
        return max_streak;
    }
};