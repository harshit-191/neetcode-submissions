class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> v;
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second > n/3){
                st.insert(it.first);
            }
        }
        for(auto it : st){
            v.push_back(it);
        }
        return v;
    }
};