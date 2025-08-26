// 


// Solution 
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