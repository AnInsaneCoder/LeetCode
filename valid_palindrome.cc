#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    bool isAlphanumeric(char c) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            return true;
        return false;
    }
    
    bool isPalindrome(string s) {
        if (s.empty())
            return true;

        int length = s.length();
        for (int i = 0, j = length - 1; i != j; i++, j--) {
            while (!isAlphanumeric(s[i])) {
                if (i == length - 1)
                    return true;
                    i++;
            }
            while (!isAlphanumeric(s[j])) {
                if (j == 0)
                    return true;
                j--;
            }
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            if (j - i <= 1)
                break;
        }

        return true;
    }
};

int main() {
    Solution solution;
    if(solution.isPalindrome("a.b,."))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    return 0;
}
