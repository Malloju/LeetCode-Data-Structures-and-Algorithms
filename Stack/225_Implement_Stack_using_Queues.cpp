#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() {
    }

    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int popped = q1.front();
        q1.pop();
        swap(q1, q2);

        return popped;
    }
    
    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();

        q2.push(q1.front());
        q1.pop();
        swap(q1, q2);

        return topElement;
    }
    
    bool empty() {
        return q1.empty();
    }
};
