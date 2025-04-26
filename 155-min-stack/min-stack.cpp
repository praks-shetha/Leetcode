class MinStack {
    private:
    vector<int>stack;
    vector<int>minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push_back(val);
        if(minstack.empty() || val<=minstack.back())
        {
            minstack.push_back(val);
        }
        else
        {
        minstack.push_back(minstack.back());
        }
    }
    
    void pop() {
        if(!stack.empty())
        {
            stack.pop_back();
            minstack.pop_back();
        }
    }
    
    int top() {
        if(!stack.empty())
        {
            return stack.back();
        }
        return -1;
    }
    
    int getMin() {
        if(!minstack.empty())
        {
            return minstack.back();
        }
        return INT_MAX;
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