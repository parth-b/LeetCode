class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        while(j < s.length()){
            if(s[j++] == ' ') reverse(s.begin()+i,s.begin()+j-1), i = j;
           
            
        }reverse(s.begin()+i,s.begin()+j);
        return s;
    }
};