class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int last = s.length() - 1;
        
        while (last >= 0 && s[last] == ' ') {
            last--;
        }
        
        while (last >= 0 && s[last] != ' ') {
            length++;
            last--;
        }
        
        return length;
    }
};
