/*Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].
*/

bool isSubset(vector<int> &a, vector<int> &b) {
    /*
        vector<bool> used(a.size(), false);
        for(int i=0; i<b.size(); i++){
            bool val = 0;
            for(int j=0; j<a.size(); j++){
                if(b[i] == a[j] && !used[j]){
                    used[j] = true;
                    val = 1;
                    break;
                }
            }
            if(!val){
                return 0;
            }
            
        }
        */
        unordered_map<int, int> freqA;

        for (int i = 0; i < a.size(); i++) {
            freqA[a[i]]++;
        }

        for (int i = 0; i < b.size(); i++) {
            if (freqA[b[i]] > 0) {
                freqA[b[i]]--;
            } else {
                return false; 
            }
        }
        return 1;
    }

   // TC = 0(N+M)
   //  SC = 0(N)