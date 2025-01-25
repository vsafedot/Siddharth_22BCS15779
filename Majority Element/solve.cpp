class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int majorityElement=nums[0];
            int count=1;
            for(int i=1;i<nums.size();i++){
                if(nums[i]==majorityElement){
                    count++;
                }
                else if(count==0){
                    majorityElement=nums[i];
                }
                else{
                    count--;
                }
            }
            
            return majorityElement;
        }
    };