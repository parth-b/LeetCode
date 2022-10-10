class Solution {
public:
    string breakPalindrome(string pal) {
        int i = 0; 
        if(pal.length() == 1) return "";
        while(i < pal.length() and pal[i] < 'b' or (pal.length()%2  and i==pal.length()/2)) i++;
        
        if(i == pal.length()) pal[pal.length() - 1] = 'b';
        else pal[i] = 'a';
        return pal;
    }
};