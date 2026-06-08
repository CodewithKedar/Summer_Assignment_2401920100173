class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      vector<int> freq1(26,0);
      vector<int> freq2(26,0);  
      for(char x:ransomNote){
        freq1[x-'a']++;
      }  
      for(char y:magazine){
        freq2[y-'a']++;
      }
      for(int i=0;i<26;i++){
        if(freq1[i]>freq2[i]) return false;
      }
      return true;
    }
};
