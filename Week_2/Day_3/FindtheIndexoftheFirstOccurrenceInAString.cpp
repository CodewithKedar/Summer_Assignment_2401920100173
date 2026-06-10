class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        if(n>m) return -1;
        return haystack.find(needle);
    }
};
