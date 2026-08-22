class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int result = 0;
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int height = min(arr[left], arr[right]);
            int width = right - left;
            result = max(result, height * width);

            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }

        return result;
    }
};