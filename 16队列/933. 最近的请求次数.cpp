class RecentCounter {
    int front;
    int rear;
    int data[10010];
public:
    RecentCounter() {
        front = 0;
        rear = -1;
    }
    
    int ping(int t) {
        data[++rear] = t;
        while(rear - front + 1 > 0 && data[front] + 3000 < t)
            front++;
        return rear - front + 1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */