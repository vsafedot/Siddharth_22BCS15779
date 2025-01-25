class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int needed=0;
            vector<int>v;
            int idx=-1;
            for(int j=0;j<nums.size();j++){
                needed=target-nums[j];
                idx=j;
                for(int i=j+1;i<nums.size();i++){
                    if(nums[i]==needed){
                        v.push_back(i);
                        v.push_back(idx);
                        break;
                    }
                }
            }
            return v;
        }
    };