class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<pair<string,string>> v;

        for(string s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            v.push_back({temp, s});
        }

        sort(v.begin(), v.end());

        vector<vector<string>> ans;

        for(int i = 0; i < v.size(); ){
            vector<string> temp;

            string key = v[i].first;

            while(i < v.size() && v[i].first == key){
                temp.push_back(v[i].second);
                i++;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
