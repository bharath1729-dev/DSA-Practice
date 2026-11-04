// 2965 Find Missing and repeated Value

/*
You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. 
Each integer appears exactly once except a which appears twice and b which is missing. 
The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
*/

/*
Example 1:
Input: grid = [[1,3],[2,2]]
Output: [2,4]
Explanation: Number 2 is repeated and number 4 is missing so the answer is [2,4].

Example 2:
Input: grid = [[9,1,7],[8,9,2],[3,4,6]]
Output: [9,5]
Explanation: Number 9 is repeated and number 5 is missing so the answer is [9,5]
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long N = n*n;
        int repeat = 0;
        int missing = 0;
        long long SSum = 0;
        long long SSact = ((N)*(N+1)*((2*N)+1)/6);
        long long Sum = 0;
        long long Sact = ((N)*(N+1))/2;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                Sum += grid[i][j];
                SSum += (grid[i][j] * grid[i][j]);
            }
        }
        int ab = ((SSum - SSact)/(Sum - Sact));
        repeat = (ab + Sum - Sact)/2;
        missing = (Sact - Sum + ab)/2;
        return {repeat, missing};
    }
};