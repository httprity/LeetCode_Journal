class Solution {
public:

     bool isVowel(char s){
            if (s == 'a' || s == 'e' || s == 'i' || s == 'o' ||
                                 s == 'u' || s == 'A' || s == 'E' || s == 'I' ||
                                 s == 'O' || s == 'U') return true;
                                 else return false;
            }
    string reverseVowels(string s) {
        vector<char>vowel;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                vowel.push_back(s[i]);
            }
        }
        reverse(vowel.begin(),vowel.end());
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=vowel[idx];
                idx++;
            }
        }

    return s;
        
    }
};