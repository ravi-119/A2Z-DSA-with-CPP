// Given an integer n, your task is to compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.

// Examples:

// Input: n = 3
// Output: 6
// Explanation: For n = 3, the sum will be 6. 1 + 2 + 3 = 6.
// Input: n = 5
// Output: 15
// Explanation: For n = 5, the sum will be 15. 1 + 2 + 3 + 4 + 5 = 15.
// Constraints:
// 1 ≤ n ≤ 104


// Solution 
class Solution {
    public:
      int findSum(int n) {
          // code here
          if(n==0)return 0;
          return(n + findSum(n-1));
      }
};

