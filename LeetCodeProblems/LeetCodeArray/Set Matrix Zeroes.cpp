// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

 

// Example 1:


// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
// Example 2:


// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

// Constraints:

// m == matrix.length
// n == matrix[0].length
// 1 <= m, n <= 200
// -231 <= matrix[i][j] <= 231 - 1
 

// Follow up:

// A straightforward solution using O(mn) space is probably a bad idea.
// A simple improvement uses O(m + n) space, but still not the best solution.
// Could you devise a constant space solution?

// Solution 
class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int n = matrix.size();
            int m = matrix[0].size();
            int col0 = 1;
            // Step 1: Mark rows & columns that need to be zeroed
            for(int i = 0; i<n; i++){
                for(int j = 0; j<m; j++){
                    if(matrix[i][j] == 0){
                        // mark the i-th row
                        matrix[i][0] = 0;
                        // mark the j-th col
                        if(j != 0){
                            matrix[0][j] = 0;
                        }else{
                            col0 = 0;
                        }
                    }
                }
            }
            
            // Step 2: Use marks to set zeroes (skip first row & col for now)
            for(int i = 1; i<n; i++){
                for(int j = 1; j<m; j++){
                    if(matrix[i][j] != 0){
                        // check for col & row
                        if(matrix[0][j] == 0 || matrix[i][0] == 0){
                            matrix[i][j] = 0;
                        }
                    }
                }
            }
            // Step 3: Handle first row
            if(matrix[0][0] == 0){
                for(int j = 0; j<m; j++){
                    matrix[0][j] = 0;
                }
            }
            // Step 4: Handle first column
            if(col0 == 0){
                for(int i = 0; i<n; i++){
                    matrix[i][0] = 0;
                }
            }
            // return matrix;
        }
    };