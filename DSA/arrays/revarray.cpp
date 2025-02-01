/* Given an array arr[], the task is to reverse the array. 
Reversing an array means rearranging the elements such that 
the first element becomes the last, the second element becomes 
second last and so on.
  */

void revarray(int arr[], int n){ // n = size of array 
   int temp;
   for(int i=0, j=n-1; i<j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
   }
}

// Time complexity = 0(n)
// Space complexity = 0(1). 