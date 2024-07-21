class MinStack {
public:
   stack<long long > st;
   long long mini;
    MinStack() {
        mini = LONG_MAX;
    }
    
    void push(int val) {
        long long x = (long long)val;
        if (st.empty()){
            mini= x;
            st.push(x);

        }else{
            if (x >= mini)st.push(x);
            else{
                st.push(2*x-mini );
                mini = x;
            }
        }
    }
    
    void pop() {
        if (st.empty())return ;
        else{
            long long oldval= st.top();
            st.pop();
            if (oldval<mini){
                mini = 2* mini - oldval;
            }
        }
    }
    
    int top() {
       long long mp = st.top();
       if (mp<mini )return (int)mini;
       else return (int)mp;
    }
    
    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */