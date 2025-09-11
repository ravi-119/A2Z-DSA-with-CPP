// Given an integer array nums, find the subarray with the largest sum, and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

// Constraints:

// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104
 

// Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

// Solution 
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n = nums.size();
            long long maxi = LONG_MIN;
            long long sum = 0;
            int start = 0;
            int ansStart = -1;
            int ansEnd = -1;
            for(int i = 0; i<n; i++){
                if (sum == 0) start = i;   // starting index
                sum += nums[i];
                if(sum > maxi){
                    maxi = sum;
    
                    ansStart = start;
                    ansEnd = i;
                }  
                if(sum < 0){
                    sum = 0;
                }
            }
            cout<<"The Subarray is:[";
            for(int i = ansStart; i<= ansEnd; i++){
                cout<<nums[i] <<" ";
            }
            cout<<"]n";
    
            return maxi;
        }
    };