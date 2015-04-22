class Solution {
public:
    int romanCharToInt(char c) {
        switch (c) {
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
        }    
    }

    int romanToInt(string s) {
        int index = 0;
        int result = 0;
        int length = s.length();
        if (s.empty())
            return 0;
        else if (length == 1)
            return romanCharToInt(s[0]);
        else {
            if (romanCharToInt(s[0]) < romanCharToInt(s[1])) {
                index = 2;
                result = romanCharToInt(s[1]) - romanCharToInt(s[0]);
            } else {
                index = 1;
                result = romanCharToInt(s[0]);
            }
        }
        return result + romanToInt(s.substr(index, length - index));
    }
};
