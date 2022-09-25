class MyCircularQueue {
public:
    vector<int> q;
    int len;
    int head = 0, tail = 0;
    bool empty = true;
    MyCircularQueue(int k) {
        q.resize(k);
        len = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(head == tail and empty) 
            empty = false;
        q[tail] = value;
        tail = (tail+1)%len;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        
        head = (head+1)%len;
        if(head == tail and !empty) 
            empty = true;
        return true;
    }
    
    int Front() {
        if(!isEmpty())
            return q[head];
        return -1;
    }
    
    int Rear() {
        if(!isEmpty())
            return q[(tail+len-1)%len];
        return -1;
    }
    
    bool isEmpty() {
        return(head == tail and empty) ;
             
    }
    
    bool isFull() {
        return head == tail and !empty;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */