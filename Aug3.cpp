//Detect Capital

/* Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

    1. All letters in this word are capitals, like "USA".
    2. All letters in this word are not capitals, like "leetcode".
    3. Only the first letter in this word is capital if it has more than one letter, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way. */

class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length();
        for (int i = 0; i < len; i++) {
            if (word[i] != toupper(word[i])) {
                break;
            }
            if (i == len - 1) {
                return true;
            }
        }
        for (int i = 1; i < len; i++) {
            if ('A' <= word[i] && word[i] <= 'Z') {
                return false;
            }
        }
        return true;
    }
};
