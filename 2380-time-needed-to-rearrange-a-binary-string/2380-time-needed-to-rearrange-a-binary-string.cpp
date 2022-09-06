class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
    int seconds = 0, changed = true;
    while(changed) {
        changed = false;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == '0' && s[i + 1] == '1') {
                swap(s[i], s[i + 1]);
                ++i;
                changed = true;
            }
        }
        seconds += changed;
    }
    return seconds;
}
};

// 0110101
// 1011010
// 1101100
// 1110100
// 1111000

// 0111010100101
// 1011101001010
// 1101110010100
// 1110111101000
// 1111011110000
// 1111101110000
// 1111110110000
// 1111111010000
// 1111111100000
// 8 