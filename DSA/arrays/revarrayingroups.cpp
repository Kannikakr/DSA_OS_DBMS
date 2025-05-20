/*Given an array arr of positive integers. Reverse every sub-array group of size k.

Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.
*/

class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
       int n = arr.size();
       for (int i = 0; i < n; i += k) {
        int left = i;
        int right = min(i + k - 1, n - 1);
        
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    }
};

//TC = O(N)
//SC = 0(1)