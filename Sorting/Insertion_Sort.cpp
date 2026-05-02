//Insertion Sort
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++){
            int j = i;
            while ( j > 0 && nums[j-1] > nums[j]){
                swap(nums[j-1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};
int main(){
    Solution mySolution;
    vector<int> nums = {11, 12, 13, 5, 6};
    vector<int> sortedNums = mySolution.insertionSort(nums);
    for(int i : sortedNums){
        cout<< i << ",";
    }
    return 0;
}