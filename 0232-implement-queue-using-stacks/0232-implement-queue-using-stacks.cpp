class MyQueue {
public:
stack<int>ss1; stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        ss1.push(x);
    }
    
    int pop() {
        if(s2.empty()){
           while(!ss1.empty()){
            s2.push(ss1.top());
            ss1.pop();
           }
        }
        int val=s2.top();
        s2.pop();
        return val;
    }
    
    int peek() {
        if(s2.empty()){
            while(!ss1.empty()){
                s2.push(ss1.top());
                ss1.pop();
            }
        }

        return s2.top();
        
    }
    
    bool empty() {
       return  ss1.empty()&&s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */