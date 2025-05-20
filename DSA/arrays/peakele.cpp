/*Given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered to be a peak if it is greater than its adjacent elements (if they exist). If there are multiple peak elements, return index of any one of them. The output will be "true" if the index returned by your function is correct; otherwise, it will be "false".

Note: Consider the element before the first element and the element after the last element to be negative infinity.

Examples :

Input: arr = [1, 2, 4, 5, 7, 8, 3]
Output: true
Explanation: arr[5] = 8 is a peak element because arr[4] < arr[5] > arr[6].

*/

 int peakElement(vector<int> &arr) {
       int e = arr.size()-1;
       int s = 0;
       int mid =  s + (e - s) / 2;
       while(s<e){
             int mid =  s + (e - s) / 2;
           if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
           }
           else{
               e = mid;
              
           }
       }
     return s;
    }

//TC = 0(log N)
//SC = 0(1)