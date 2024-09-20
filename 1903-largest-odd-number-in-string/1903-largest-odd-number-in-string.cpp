#include<bits/stdc++.h>
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        while(int(num[n])%2==0 && n>0){
            n=n-1;
        }
        if(num[n]%2==0){
            return "";
        }
        return num.substr(0,n+1);
    }
};