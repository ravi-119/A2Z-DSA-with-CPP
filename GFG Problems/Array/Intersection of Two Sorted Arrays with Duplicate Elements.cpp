// // Intersection of Two Sorted Arrays with Duplicate Elements
// Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the intersection of the two arrays in sorted order.

// Intersection of two arrays can be defined as the set containing distinct common elements that are present in both of the arrays.
// Examples:

// Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
// Output: 1 2 3
// Explanation: Distinct elements in both the arrays are: 1 2 3.
// Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
// Output: 2 3 4
// Explanation: Distinct elements in both the arrays are: 2 3 4.
// Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
// Output: []
// Explanation: No common elements.
// Constraints:
// 1  <=  a.size(), b.size()  <=  105
// -109  <=  a[i] , b[i]  <=  109

// Solution 
//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int m = arr2.size();
        int i = 0;
        int j = 0;
        vector<int>intersectionArray;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                i++;
            }
            else if(arr2[j] < arr1[i]){
                j++;
            }
            else{
                if(intersectionArray.empty() || intersectionArray.back() != arr1[i]){
                  intersectionArray.push_back(arr1[i]);
                //   Skiping duplicates
                  int val = arr1[i];
                //   Skiping duplicates in arr1
                  while(i<n && arr1[i] == val){
                      i++;
                  }
                //   Skiping duplicates in arr2
                  while(j<m && arr2[j] == val){
                     j++; 
                  }
                }
                
            }
            
        }
        return intersectionArray;
        
    }
};
