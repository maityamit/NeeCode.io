class MinStack {
private:
    vector<int> stack;
    vector<int> min;
public:
    MinStack() {

    }
    
    void push(int x) {
        stack.push_back(x);
        
        if (min.empty() || x <= min.back()) {
            min.push_back(x);
        }
    }

    void pop() {
        if(stack.back() == getMin())
            min.pop_back();
        
        stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min.back();
    }
};
