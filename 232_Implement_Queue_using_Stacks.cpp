//implement queue using stacks

class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        s1 = stack<int> ();
        s2 = stack<int>();
    }
    
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {
        if (s2.empty()){
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    int peek() {
        if (s2.empty()){
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

