class CustomStack {
public:
  int s;
   vector<int> ans;
   int ind ;
    CustomStack(int maxSize) {
        s = maxSize;
    }
    
    void push(int x) {
        if (ans.size() < s ){
            ans.push_back(x);
        }

    }
    
    int pop() {
        if (ans.size()==0){
            return -1;
        }
        int ele = ans.back();
            ans.pop_back();
            return ele;

    }
    
    void increment(int k, int val) {
        if (ans.size() < k){
          for (int i =0;i<ans.size();i++){
            ans[i] = ans[i] + val;
           }
        }
        else {
            for (int i = 0;i<k;i++){
                ans[i] = ans[i] + val;
            }
        }
       
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */