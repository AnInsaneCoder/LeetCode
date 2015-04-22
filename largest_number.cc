#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool cmp(const string &a, const string &b) {
        string ab = a + b;
        string ba = b + a;

        return ab > ba;
    }

    string largestNumber(vector<int> &num) {
        int count = 0;
        int size = num.size();
        if (size == 0)
            return NULL;
        vector<string> vec;
        for (int i = 0; i < size; i++) {
            if (num[i] == 0)
                count++;
            char str[20];
            sprintf(str, "%d", num[i]);
            vec.push_back(str);
        }

        if (count == size)
            return "0";
        sort(vec.begin(), vec.end(), cmp);
        for(int i = 0; i < size; i++)
            cout<<vec[i]<<" ";
        cout<<endl;

        string result;
        for (int i = 0; i < size; i++)
            result += vec[i];

        return result;
    }
};

int main() {
    //Solution solution = new Solution();
    Solution solution;
    vector<int> a;// = {2, 32, 54, 6, 47, 91, 29, 488, 9, 62};
    a.push_back(2);
    a.push_back(32);
    a.push_back(54);
    a.push_back(6);
    a.push_back(47);
    a.push_back(91);
    a.push_back(29);
    a.push_back(488);
    a.push_back(9);
    a.push_back(62);
    string result = solution.largestNumber(a);
    cout<<result<<endl;
}
