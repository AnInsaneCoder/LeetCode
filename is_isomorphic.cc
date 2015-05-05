class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> maps;
        unordered_map<char, char> mapt;
        int length = s.length();
        for (int i = 0; i < length; i++) {
            if (maps.count(s[i]) == 0)
                maps[s[i]] = t[i];
            else {
                if (maps[s[i]] != t[i])
                    return false;
            }
            if (mapt.count(t[i]) == 0)
                mapt[t[i]] = s[i];
            else {
                if (mapt[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};
