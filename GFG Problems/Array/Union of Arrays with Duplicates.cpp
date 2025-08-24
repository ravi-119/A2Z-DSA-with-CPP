// Union of Arrays with Duplicates
// Difficulty: EasyAccuracy: 42.22%Submissions: 458K+Points: 2Average Time: 10m
// You are given two arrays a[] and b[], return the Union of both the arrays in any order.

// The Union of two arrays is a collection of all distinct elements present in either of the arrays. If an element appears more than once in one or both arrays, it should be included only once in the result.

// Note: Elements of a[] and b[] are not necessarily distinct.
// Note that, You can return the Union in any order but the driver code will print the result in sorted order only.

// Examples:

// Input: a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
// Output: [1, 2, 3]
// Explanation: Union set of both the arrays will be 1, 2 and 3.
// Input: a[] = [1, 2, 3], b[] = [4, 5, 6] 
// Output: [1, 2, 3, 4, 5, 6]
// Explanation: Union set of both the arrays will be 1, 2, 3, 4, 5 and 6.
// Input: a[] = [1, 2, 1, 1, 2], b[] = [2, 2, 1, 2, 1] 
// Output: [1, 2]
// Explanation: Union set of both the arrays will be 1 and 2.
// Constraints:
// 1 ≤ a.size(), b.size() ≤ 106
// 0 ≤ a[i], b[i] ≤ 105

// Solution 
class Solution {
    public:
      vector<int> findUnion(vector<int>& a, vector<int>& b) {
          // Make local copies so we don't mutate caller inputs
          vector<int> A = a, B = b;
          sort(A.begin(), A.end());
          sort(B.begin(), B.end());
  
          vector<int> res;
          int i = 0, j = 0;
          int n1 = A.size(), n2 = B.size();
  
          while (i < n1 && j < n2) {
              if (A[i] == B[j]) {
                  if (res.empty() || res.back() != A[i]) res.push_back(A[i]);
                  ++i; ++j;
              } else if (A[i] < B[j]) {
                  if (res.empty() || res.back() != A[i]) res.push_back(A[i]);
                  ++i;
              } else {
                  if (res.empty() || res.back() != B[j]) res.push_back(B[j]);
                  ++j;
              }
          }
  
          while (i < n1) {
              if (res.empty() || res.back() != A[i]) res.push_back(A[i]);
              ++i;
          }
          while (j < n2) {
              if (res.empty() || res.back() != B[j]) res.push_back(B[j]);
              ++j;
          }
  
          return res;
      }
};