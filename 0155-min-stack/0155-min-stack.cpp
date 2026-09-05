class MinStack {
public:
    stack<long long> st;
    MinStack() {
        
    }
    long long mini = LLONG_MAX;
    void push(int value) {
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(mini < value) st.push(value);
            else{
                st.push(1LL * 2*value - mini);
                mini = value;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long x = st.top();
        st.pop();
        if(x < mini) mini = 1LL * 2*mini - x;   
    }
    
    int top() {
        if(st.empty()) return -1;
        long long x = st.top();
        if(mini < x) return x;
        return mini;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */