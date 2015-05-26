// solution 1
class Solution {
public:
    void swap(int *a, int *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
    void adjust_heap(vector<int>& nums, int length, int begin) {
        int left = 2 * begin + 1;
        int right = 2 * begin + 2;
        int max = begin;
        while (left < length || right < length) {
            if (left < length && nums[left] > nums[max])
                max = left;
            if (right < length && nums[right] > nums[max])
                max = right;

            if (max != begin) {
                swap(&nums[begin], &nums[max]);
                begin = max;
                left = 2 * begin + 1;
                right = 2 * begin + 2;
            } else
                break;
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int length = nums.size();
        for (int i = length/2 - 1; i >= 0; i--)
            adjust_heap(nums, length, i);
        for (int i = 1; i <= k; i++) {
            swap(&nums[0], &nums[length - i]);
            adjust_heap(nums, length - i, 0);
        }
        return nums[length - k];
    }
};

// solution 2
class Solution {
public:
    void swap(int *a, int *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
    void adjust_heap(vector<int>& nums, int length, int begin) {
        int left = 2 * begin + 1;
        int right = 2 * begin + 2;
        int min = begin;
        while (left < length || right < length) {
            if (left < length && nums[left] < nums[min])
                min = left;
            if (right < length && nums[right] < nums[min])
                min = right;
            if (min != begin) {
                swap(&nums[begin], &nums[min]);
                begin = min;
                left = 2 * begin + 1;
                right = 2 * begin + 2;
            } else
                break;
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int length = nums.size();
        for (int i = k/2 - 1; i >= 0; i--)
            adjust_heap(nums, k, i);
        for (int i = k; i < length; i++) {
            if (nums[i] > nums[0]) {
                swap (&nums[0], &nums[i]);
                adjust_heap(nums, k, 0);
            }
        }
        return nums[0];
    }
};
