class MinStack {
public:
  stack<long long> st;
  long long mini ;

    MinStack() {
        mini = INT_MAX;      
    }
    
    void push(int value) {
        long long val = (long long)value;
        if (st.empty()) {
                    st.push(val);

            mini = val;

        }
        else if (val< mini){
                st.push(2 * val - mini); // encoded value
            mini = val;
        }
        else{
            st.push(val);
        }
    }
    
    void pop() {
        
        long long val = st.top();
        st.pop();
        if (val < mini){
              mini = 2* mini - val;
        }
        
    }
    
    int top() {
        long long val = st.top();
        if (val< mini)return (int)mini;
        return val;
    }
    
    int getMin() {
        return (int)mini;
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