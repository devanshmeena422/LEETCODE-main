class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k%n;
        //poora array reverse
        reverse(nums.begin(),nums.end());
        //Left reverse
        reverse(nums.begin(),nums.begin()+k);
        //right reverse
        reverse(nums.begin()+k,nums.end());
        return;
    }
};