class Solution {
public:
    int edgeScore(vector<int>& edges) {
        vector<long long> u(edges.size());
        for(int i = 0; i<edges.size(); i++) 
            u[edges[i]] += i;
        
        return max_element(u.begin(), u.end()) - u.begin();
    }
};