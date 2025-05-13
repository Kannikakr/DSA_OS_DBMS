/* Given an array arr[] and an integer k where 
k is smaller than the size of the array, 
the task is to find the kth smallest element 
in the given array.*/

class Solution {
    public:
      // arr : given array
      // k : find kth smallest element and return using this function
      int kthSmallest(vector<int> &arr, int k) {
          int n = arr.size();
          for (int i = 0; i < k; i++) {
          int minIndex = i;
  
          for (int j = i+1; j < n; j++) {
              if (arr[j] < arr[minIndex]) {
                  minIndex = j;
              }
          }
  
          swap(arr[i], arr[minIndex]);
      }
      return arr[k - 1];
          
      }
  };

// TC = O(k*n)
// SC = O(1)