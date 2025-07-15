class Solution {
public:
    bool isValid(string word) {
        int n=word.length();
        if(n<3){
            return false;
        }
        int v=0,c=0;
        string vowels="aeiouAEIOU";
        for(char ch:word){
            if(isalpha(ch)){
                if(vowels.find(ch)!=string::npos){
                    v++;
                }
                else{
                    c++;
                }
            }
            else if(!isdigit(ch)){
                return false;
            }
        }
        return c>=1 && v>=1;
    }
};