class LUPrefix {
public:
    vector<int> temp;
    int cur;
    LUPrefix(int n) {
        temp.resize(n+1);
        temp[0] = 1;
        cur = 0;
    }
    
    void upload(int video) {
        temp[video] = 1;
        if(video == cur+1) cur++;
        
        while(cur+1 < temp.size() and temp[cur+1])
            cur++;
        
    }
    
    int longest() {
        return cur;
    }
};
// 
/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */