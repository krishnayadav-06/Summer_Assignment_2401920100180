# ============================================================
# 557. Reverse Words in a String III
# Difficulty : Easy
# Language   : Python3
# Runtime    : 0 (beats 100.0%)
# Memory     : 19756000 (beats 56.1%)
# Submitted  : 2026-06-11 18:23:12 UTC
# URL        : https://leetcode.com/problems/reverse-words-in-a-string-iii/
# ============================================================
class Solution:
    def reverseWords(self, s: str) -> str:
        List = s.split()
        res = []
        for word in List:
            res.append(word[::-1])
        return " ".join(res)
