// ============================================================
// 443. String Compression
// Difficulty : Medium
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 13812000 (beats 46.6%)
// Submitted  : 2026-06-12 18:28:44 UTC
// URL        : https://leetcode.com/problems/string-compression/
// ============================================================
class Solution {
public:
    int compress(vector<char>& chars) {
        int writeIndex = 0;
        int arrayLength = chars.size();

        for (int readIndex = 0, nextIndex = readIndex + 1; readIndex < arrayLength;) {
            while (nextIndex < arrayLength && chars[nextIndex] == chars[readIndex]) {
                ++nextIndex;
            }

            chars[writeIndex++] = chars[readIndex];

            int groupSize = nextIndex - readIndex;
            if (groupSize > 1) {
                string countStr = to_string(groupSize);
                for (char digit : countStr) {
                    chars[writeIndex++] = digit;
                }
            }

            readIndex = nextIndex;
        }

        return writeIndex;
    }
};