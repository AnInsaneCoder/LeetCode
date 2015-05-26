class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> my_map;
        vector<int> result;
        // for (int i = 0; i < nums.size(); i++)
        //     my_map[nums[i]] = i;

        for (int i = 0; i < nums.size(); i++) {
            int tmp = target - nums[i];

            if ((my_map.find(tmp) != my_map.end()) && (my_map[tmp] != i)) {
                int j = my_map[tmp];
                // result.push_back(i < j ? i + 1 : j + 1);
                // result.push_back(i > j ? i + 1 : j + 1);
                result.push_back(j + 1);
                result.push_back(i + 1);
                break;
            }
            my_map[nums[i]] = i;
        }
        return result;
    }
};
