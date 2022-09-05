class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> q(stones.begin(), stones.end());
        while(q.size() > 1) {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            q.push(abs(a-b));
        } 
        return q.top();
    }
};

//[7,6,7,6,9]
// 9 2 5 1 6 