class Solution {
public:
    bool isFreqsame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if (n > m) return false;
        int freqS1[26] = {0}; 
        int freqWindow[26] = {0};
        for (int i = 0; i < n; i++) {
            freqS1[s1[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            freqWindow[s2[i] - 'a']++;
        }
        if (isFreqsame(freqS1, freqWindow)) {
            return true;
        }
        for (int i = n; i < m; i++) {
            freqWindow[s2[i] - 'a']++;
            freqWindow[s2[i - n] - 'a']--;
            if (isFreqsame(freqS1, freqWindow)) {
                return true;
            }
        }
        return false;
    }
};
