class Solution {
public:
    vector<int> merge(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0;
        int m = a.size(), n = b.size();
        vector<int> nums;

        while (i < m && j < n) {
            if (a[i] <= b[j]) nums.push_back(a[i++]);
            else nums.push_back(b[j++]);
        }

        while (i < m) nums.push_back(a[i++]);
        while (j < n) nums.push_back(b[j++]);

        return nums;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = merge(nums1, nums2);
        int sz = ans.size();

        if (sz % 2 == 0)
            return (ans[sz/2 - 1] + ans[sz/2]) / 2.0;
        else
            return ans[sz/2];
    }
};