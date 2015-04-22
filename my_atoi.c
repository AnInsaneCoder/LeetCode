#include <iostream>
#include <string>
#include <limits.h>
#include <sstream>

using namespace std;

class Solution {
public:
    string eraseWhitespace(string str) {
        int index = str.find_first_not_of(" ");
        string result = str.erase(0, index);
        index = result.find_first_not_of("0123456789-");
        if(index < 0)
            return result;
        
        result = result.erase(index, result.length());
        return result;
    }
    int myAtoi(string str) {
        if(str.empty())
            return 0;

        string tmp_str = eraseWhitespace(str);
        if(tmp_str.empty())
            return 0;

        long long result = stoll(tmp_str);
        /*
        stringstream ss;
        ss << tmp_str;
        long long result;
        ss >> result;
        */
        if (result > INT_MAX)
            return INT_MAX;

        if (result < INT_MIN)
            return INT_MIN;

        return result;
    }
};

int main() {
    Solution solution;
    cout<<solution.myAtoi("1")<<endl;
    return 0;
}
