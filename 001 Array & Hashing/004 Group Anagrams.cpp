class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vt;
        unordered_map<string,vector<string>> map;
        for(auto i:strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            map[temp].push_back(i);
        }
        for(auto i:map) vt.push_back(i.second);
        return vt;
    }
};
