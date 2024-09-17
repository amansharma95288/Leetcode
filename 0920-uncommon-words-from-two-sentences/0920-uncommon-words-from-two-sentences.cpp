class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        vector<string>ans;
        stringstream ss1(s1);
        string temp="";
        while(ss1>>temp)mp[temp]++;
        stringstream ss2(s2);
        while(ss2>>temp)mp[temp]++;
        for(auto it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};