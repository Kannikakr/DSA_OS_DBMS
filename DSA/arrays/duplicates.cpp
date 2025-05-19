/* ARRAY DUPLICATES
Given an array arr of integers,
 find all the elements that occur more 
 than once in the array. If no element
  repeats, return an empty array.
*/
vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
   /*     int n = arr.size();
    for (int i = 0; i < n-1; ++i) {
       for (int j = i + 1; j < n; ++j) {
       if (arr[i] == arr[j]) {
            bool seen = false;
            for (int x : ans) {
                if (x == arr[i]) {
                    seen = true;
                    break;
                }
            }
            if (!seen) {
                ans.push_back(arr[j]);
            }
            break;
        }
       }
    }  we will get TLE for this because TC = 0(N^2) and SC = 0(N)*/
unordered_map<int,int> freq;
for(int x : arr){
    ++freq[x];
    if(freq[x] == 2){
        ans.push_back(x);
    }
}

        return ans;
    }

//for unordered_map 
// TC = 0(N)
// SC = 0(N)