// Problem Statement 

// You are given an integer n. You have  to print all numbers from 1 to n.
// Note: You must use recursion only, and print all numbers from 1 to n in a single line, separated by spaces.

// Explaination 
// 🔁 Recursion Behavior Summary:
// Recursion works like a stack (LIFO - Last In, First Out).

// When you do printNos(n - 1) first, you're pushing calls onto the stack.

// Only after reaching the base case (n == 0), you unwind the stack and print numbers from 1 to n.



class Solution {
    public:
      void printNos(int n) {
          // Code here
          if (n == 0) return;
          printNos(n - 1);
          cout << n << " ";
          
      }
};

  