class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for (int i=0; i<sentence.length(); i++){
            arr[sentence[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
            if(arr[i] < 1){
                return false;
            }
        }
        return true;
    }
};

// Time Complexity: 0(n)
// Space Complexity: 0(1) 