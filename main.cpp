class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int newElement = 0;
        int count = 0;
        int index = 1;
        
        if (nums.size() > 0) {
            newElement = nums[0];
            count++;
            
            for (int i = 1; i < nums.size(); ++i) {
                if (newElement != nums[i]) {
                    newElement = nums[i];
                    nums[index++] = newElement;
                    count++;
                }
            }
        }
        
        return count;
    }
};
