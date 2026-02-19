class Solution {
public:
    bool isVowel(char s){
            if (s == 'a' || s == 'e' || s == 'i' || s == 'o' ||
                                 s == 'u' || s == 'A' || s == 'E' || s == 'I' ||
                                 s == 'O' || s == 'U') return true;
                                 else return false;
            }
    string sortVowels(string s){
            vector<char>vowel;

            for(int i=0;i<s.size();i++){
                if(isVowel(s[i]))
                vowel.push_back(s[i]);
            }
            sort(vowel.begin(),vowel.end());
                int idx_for_v=0;
            for(int j=0;j<s.size();j++){
                if(isVowel(s[j])){
                    s[j]=vowel[idx_for_v];
                    idx_for_v++;
                }
            }
            return s;
    }
};