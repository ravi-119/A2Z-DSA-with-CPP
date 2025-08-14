// Given an array arr[]. The task is to find the largest element and return it.

// Examples:

// Input: arr[] = [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of the given array is 90.
// Input: arr[] = [5, 5, 5, 5]
// Output: 5
// Explanation: The largest element of the given array is 5.
// Input: arr[] = [10]
// Output: 10
// Explanation: There is only one element which is the largest.
// Constraints:
// 1 <= arr.size()<= 106
// 0 <= arr[i] <= 106



// Solution 
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i] > largest)
                largest = arr[i];
        }
        return largest;
    }
};
// Time Complexity: O(n), where n is the size of the array.
// Space Complexity: O(1), as we are using only a constant amount of extra space.       


