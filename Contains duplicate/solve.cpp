class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
             unordered_map<int,int> mp;
            for(int i=0;i<nums.size();i++){
                int current=nums[i];
                if(mp.find(current)==mp.end()){
                    mp[current]++;
                }
                else{
                    return true;
                }
            }
            return false;
        }
    };