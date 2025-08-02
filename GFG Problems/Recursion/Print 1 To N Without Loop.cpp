// Problem Statement 

// You are given an integer n. You have  to print all numbers from 1 to n.
// Note: You must use recursion only, and print all numbers from 1 to n in a single line, separated by spaces.


class Solution {
    public:
      void printNos(int n) {
          // Code here
          if (n == 0) return;
          printNos(n - 1);
          cout << n << " ";
          
      }
  };

  