// Pascal's Triangle III
/*
Given two integers r and c, 
return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.

In Pascal's triangle:
The first row contains a single element 1.
Each row has one more element than the previous row.
Every row starts and ends with 1.
For all interior elements (i.e., not at the ends), 
the value at position (r, c) is computed as the sum of the two elements directly above it from the previous row:
Pascal[r][c]=Pascal[r−1][c−1]+Pascal[r−1][c]*/

/*
Example 1:
Input: r = 4, c = 2
Output: 3
Explanation:
The Pascal's Triangle is as follows:
1
1 1
1 2 1
1 3 3 1
....

Thus, value at row 4 and column 2 = 3
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        vector<int> ans(r, 0);
        ans[0] = 1;
        for(int i = 1; i < r; i++){
            for(int j = i; j > 0; j--){
                ans[j] = ans[j-1] + ans[j];
            }        
        }
        return ans[c-1];
    }
};