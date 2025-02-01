/*Maximum and minimum of an array 
using minimum number of comparisons

Given an array of size N. 
The task is to find the maximum and the minimum element 
of the array using the minimum number of comparisons. */

int minele(int arr[], int n ){ // n = size of array
   int min_ele = arr[0];
   for (int i=1; i<n; i++){  
    if(arr[i] < min_ele){
        min_ele = arr[i];
    }
   }
   return min_ele;
}

int maxele(int arr[], int n ){ // n = size of array
   int max_ele = arr[0];
   for (int i=1; i<n; i++){  
    if(arr[i] > max_ele ){
        max_ele = arr[i];
    }
   }
   return max_ele;
}

// Time complexity : 0(N)
// space complexity : o(1)