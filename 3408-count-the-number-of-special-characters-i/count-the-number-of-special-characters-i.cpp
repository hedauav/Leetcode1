class Solution {
public:

    int numberOfSpecialChars(string word) {

        unordered_set<char> lower;
        unordered_set<char> upper;

        int count = 0;

        // store lowercase and uppercase letters
        for(char ch : word) {

            if(islower(ch)) {
                lower.insert(ch);
            }
            else {
                upper.insert(ch);
            }
        }

        // check matching pairs
        for(char ch : lower) {

            if(upper.find(toupper(ch)) != upper.end()) {
                count++;
            }
        }

        return count;
    }
};