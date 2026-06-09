// ============================================================
// 567. Permutation in String
// Difficulty : Medium
// Language   : C++
// Runtime    : 3 (beats 65.8%)
// Memory     : 9704000 (beats 98.5%)
// Submitted  : 2026-06-09 18:20:07 UTC
// URL        : https://leetcode.com/problems/permutation-in-string/
// ============================================================
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int uniqueCharsToMatch = 0;
        int charFrequencyDiff[26] = {0};

        for (char ch : s1) {
            int charIndex = ch - 'a';
            if (++charFrequencyDiff[charIndex] == 1) {
                ++uniqueCharsToMatch;
            }
        }

        int patternLength = s1.size();
        int textLength = s2.size();

        for (int windowEnd = 0; windowEnd < textLength; ++windowEnd) {
            int currentCharIndex = s2[windowEnd] - 'a';
            if (--charFrequencyDiff[currentCharIndex] == 0) {
                --uniqueCharsToMatch;
            }

            if (windowEnd >= patternLength) {
                int leftCharIndex = s2[windowEnd - patternLength] - 'a';
                if (++charFrequencyDiff[leftCharIndex] == 1) {
                    ++uniqueCharsToMatch;
                }
            }

            if (uniqueCharsToMatch == 0) {
                return true;
            }
        }

        return false;
    }
};