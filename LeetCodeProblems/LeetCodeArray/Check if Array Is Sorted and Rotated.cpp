// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 

// Constraints:

// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100





// Solution 
class Solution {
public:
    bool check(vector<int>& nums) {
        // Code Here
        int n = nums.size();

        int count = 0;
        // This loop compares every element to the previous one.
        for(int i =1; i<n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        // This checks the wrap-around from last element to first element.
        if(nums[n-1]>nums[0]){
            count++;
        }
        // If the array has at most 1 break, it’s either:
        // Sorted normally (count = 1 from wrap-around check)
        // Rotated sorted (count = 1 from inside loop)
        // If count > 1, there’s more than one drop → array is not rotated sorted.
        return count<=1;
        
    }
};







