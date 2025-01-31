/*

Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m.

*/ 

// Solution 
class Solution {
  public:
    string compareNM(int n, int m){
        if( n < m )
        return "lesser";
        else if(n == m )
        return "equal";
        else
        return "greater";
    }
};