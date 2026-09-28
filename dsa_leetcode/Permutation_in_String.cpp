class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        vector<int> freq1(26, 0);
        vector<int> window(26, 0);

        // Frequency of characters in s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < s2.size(); right++) {

            // Add current character
            window[s2[right] - 'a']++;

            // Keep window size equal to s1's length
            if (right - left + 1 > s1.size()) {
                window[s2[left] - 'a']--;
                left++;
            }

            // Compare frequencies
            if (window == freq1)
                return true;
        }

        return false;
    }
};