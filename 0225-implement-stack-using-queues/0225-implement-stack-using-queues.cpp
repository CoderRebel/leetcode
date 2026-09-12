class MyStack {
public:
    queue <int> q;
    int length;
    MyStack() {
        length = 0;
    }
    
    void push(int x) {
        int n  = q.size();
        q.push(x);
        for(int i = 1; i <= n;i++){
            q.push(q.front());
            q.pop();
        }
        length++;
    }
    
    int pop() {
        if(length == 0) return -1;
        int x = q.front();
        q.pop();
        length--;
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(length == 0) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */