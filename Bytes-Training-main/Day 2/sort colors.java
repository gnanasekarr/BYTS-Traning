class Solution {
    public void sortColors(int[] nums) {
        int l = 0;
        int r = nums.length-1; 
        for (int i = l; i <= r; i++) {
            while (l <= i && i <= r && nums[i] != 1) {
                if (nums[i] == 0) {
                    int tmp = nums[i];
                    nums[i] = nums[l];
                    nums[l] = tmp;
                    l++;
                } else if (nums[i] == 2) {
                    int tmp = nums[i];
                    nums[i] = nums[r];
                    nums[r] = tmp;
                    r--;
                }
            }
        }
    }
}
