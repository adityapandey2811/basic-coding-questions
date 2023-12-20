// My Solution

class Solution {
public:
    bool static sortCustom(pair<int,int> a, pair<int,int> b) {
        return a.first > b.first; 
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size(); i++) {
            if(mp.find(nums[i]) != mp.end()) {
                mp[nums[i]] = mp[nums[i]] + 1;
            } else {
                mp[nums[i]] = 1;
            }
        }
        vector<pair<int,int>> v;
        for(auto i = mp.begin();i!=mp.end();i++) {
            v.push_back({i->second,i->first});
        }
        sort(v.begin(),v.end(),sortCustom);
        vector<int> result;
        for(int i=0;i<k;i++) {
            result.push_back(v[i].second);
        }
        return result;
    }
};

// Other Solution with unique sorting technique same algorithm

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto i:m){
            v.push_back({i.first, i.second});
        }
        sort(v.rbegin(), v.rend(), [](auto &left, auto &right){return left.second < right.second;});
        vector<int>ans;
        for(auto i:v){
            ans.push_back(i.first);
            if(ans.size()==k) break;
        }
        return ans;
    }
};
