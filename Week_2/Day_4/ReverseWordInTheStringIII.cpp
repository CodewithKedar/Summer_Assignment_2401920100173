void rev(string &str, int i, int j) {
    if (i > j)
        return;
    swap(str[i], str[j]);
    return rev(str, i + 1, j - 1);
}
class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> v;
        for (char ch : s) {
            if (ch == ' ') {
                v.push_back(word);
                word="";
            } else {
                word = word + ch;
            }
        }
        v.push_back(word);

        for (int i = 0; i < v.size(); i++) {
            rev(v[i], 0, v[i].length() - 1);
        }
        string ans = v[0];
        for (int i = 1; i < v.size(); i++) {
            ans += " ";
            ans += v[i];
        }
        return ans;
    }
};
