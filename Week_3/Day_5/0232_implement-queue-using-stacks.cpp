// ============================================================
// 232. Implement Queue using Stacks
// Difficulty : Easy
// Language   : C++
// Runtime    : 0 (beats 100.0%)
// Memory     : 10032000 (beats 33.3%)
// Submitted  : 2026-06-19 14:10:41 UTC
// URL        : https://leetcode.com/problems/implement-queue-using-stacks/
// ============================================================
class MyQueue {
    stack<int> st;

public:
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop() {
        stack<int> st2;
        while (st.size() > 1) {
            int val = st.top();
            st.pop();
            st2.push(val);
        }
        int returnElement = st.top();
        st.pop();
        while (!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }
        return returnElement;
    }

    int peek() {
        stack<int> st2;
        while (st.size() > 1) {
            int val = st.top();
            st.pop();
            st2.push(val);
        }
        int returnElement = st.top();
        while (!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }
        return returnElement;
    }

    bool empty() { return st.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */