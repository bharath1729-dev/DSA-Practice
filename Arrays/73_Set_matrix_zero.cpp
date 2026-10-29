/* 73 SET MATRIX ZERO*/
/*Given an m x n integer matrix matrix, if an element is 0, 
set its entire row and column to 0's.
You must do it in place. */
/* EXAMPLE1 :
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]*/  

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    // m = rows
        int n = matrix[0].size(); // n = columns
        
        vector<int> row(m, 0);
        vector<int> column(n, 0);
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    column[j] = 1;
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((row[i] == 1) || (column[j] == 1)){
                    matrix[i][j] = 0;
                } 
            }
        }
    }
};