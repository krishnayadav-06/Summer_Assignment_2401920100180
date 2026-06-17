// ============================================================
// 155. Min Stack
// Difficulty : Medium
// Language   : C++
// Runtime    : 5 (beats 48.7%)
// Memory     : 24400000 (beats 35.8%)
// Submitted  : 2025-11-13 16:03:17 UTC
// URL        : https://leetcode.com/problems/min-stack/
// ============================================================
class MinStack {
private:
    std::stack<pair<int, int>> stack;

public:
    MinStack() {}

    void push(int val) {
        if (stack.empty()) {
            stack.push({val, val});
        } else if (val < stack.top().second) {
            stack.push({val, val});
        } else {
            int min = stack.top().second;
            stack.push({val, min});
        }
    }
    void pop() { stack.pop(); }
    int top() { return stack.top().first; }
    int getMin() { return stack.top().second; }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */