class CustomStack {
    int top;
    int size;
    int *stk;
public:
    CustomStack(int maxSize) {
        stk = new int[maxSize + 1];
        size = maxSize;
        top = 0;
    }
    
    void push(int x) {
        if(top < size){
            stk[top++] = x; //入栈后 top++
        }
    }
    
    int pop() {
        if(top == 0){
            return -1;
        }
        return stk[--top]; //出栈前 --top
    }
    
    void increment(int k, int val) {
        int i;
        for(i = 0; i < k && i < top; ++i ){
            stk[i] += val;
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