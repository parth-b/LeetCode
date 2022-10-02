class LUPrefix {
public:
    vector<int> temp;
    int cur;
    LUPrefix(int n) {
        temp.resize(n+1);
        //temp[0] = 1;
        cur = 0;
    }
    
    void upload(int video) {
        temp[video-1] = 1;
        
    }
    
    int longest() {
        while(temp[cur]) ++cur;
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