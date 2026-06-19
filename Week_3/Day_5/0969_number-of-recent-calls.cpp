// ============================================================
// 969. Number of Recent Calls
// Difficulty : Easy
// Language   : C++
// Runtime    : 1122 (beats 5.0%)
// Memory     : 64264000 (beats 35.8%)
// Submitted  : 2026-06-19 15:02:48 UTC
// URL        : https://leetcode.com/problems/number-of-recent-calls/
// ============================================================
class RecentCounter {
    deque<int> que;

public:
    RecentCounter() {}

    int ping(int t) {
        que.push_back(t);
        int count = 0;
        for (int ping : que) {
            if (t - 3000 <= ping && ping <= t) {
                count++;
            }
        }
        return count++;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */